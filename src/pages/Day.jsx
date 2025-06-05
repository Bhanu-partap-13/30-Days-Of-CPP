import React, { useState, useEffect } from "react";
import { useParams, Link } from "react-router-dom";
import ReactMarkdown from "react-markdown";
import { Prism as SyntaxHighlighter } from "react-syntax-highlighter";
import { atomDark } from "react-syntax-highlighter/dist/esm/styles/prism";
import { prism as prismLight } from "react-syntax-highlighter/dist/esm/styles/prism";
import { FaFileCode, FaFileAlt, FaDownload, FaTerminal, FaRegStickyNote } from "react-icons/fa";
import daysFiles from "../data/daysFiles.json";
import Loader from "../components/Loader";
import { useTheme } from "../contexts/ThemeContext";

const fetchFileContent = async (dayFolder, fileName) => {
  try {
    const response = await fetch(`/${dayFolder}/${fileName}`);
    if (!response.ok) {
      throw new Error(`File not found or error fetching: ${dayFolder}/${fileName} (status: ${response.status})`);
    }
    const textContent = await response.text();
    return textContent;
  } catch (error) {
    if (fileName.toLowerCase().endsWith(".md")) {
      return `# Markdown Content for ${fileName}\n\n*File not found at /${dayFolder}/${fileName}. Please ensure it exists in the public directory.*`;
    } else if (fileName.toLowerCase().endsWith(".cpp")) {
      return `// C++ Code for ${fileName}\n// File not found at /${dayFolder}/${fileName}. Please ensure it exists in the public directory.\n#include <iostream>\n\nint main() {\n    std::cout << \"File not found for ${fileName}!\" << std::endl;\n    return 1;\n}`;
    }
    return `Content for ${fileName}\n*File not found at /${dayFolder}/${fileName}. Please ensure it exists in the public directory.*`;
  }
};

const getFileIcon = (fileName) => {
  if (fileName.toLowerCase().endsWith(".cpp")) return <FaFileCode className="inline mr-1 text-blue-500 dark:text-blue-400" />;
  if (fileName.toLowerCase().endsWith(".md")) return <FaFileAlt className="inline mr-1 text-purple-500 dark:text-purple-400" />;
  if (fileName.toLowerCase().endsWith(".exe")) return <FaFileAlt className="inline mr-1 text-green-500 dark:text-green-400" />;
  if (fileName.toLowerCase().endsWith(".txt")) return <FaFileAlt className="inline mr-1 text-yellow-500 dark:text-yellow-400" />;
  return <FaFileAlt className="inline mr-1 text-gray-500 dark:text-gray-400" />;
};

const getFileType = (fileName) => {
  if (fileName.toLowerCase().endsWith(".md")) return "md";
  if (fileName.toLowerCase().endsWith(".cpp")) return "cpp";
  if (fileName.toLowerCase().endsWith(".txt")) return "txt";
  return "other";
};

const Day = () => {
  const { theme } = useTheme();
  const { dayId } = useParams();
  const dayNum = parseInt(dayId, 10);
  const dayFolder = `Day${dayId}`;

  const [files, setFiles] = useState([]);
  const [selectedFileIdx, setSelectedFileIdx] = useState(0);
  const [fileContent, setFileContent] = useState("");
  const [copied, setCopied] = useState(false);
  const [notes, setNotes] = useState("");
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState("");

  useEffect(() => {
    const fileList = daysFiles[dayFolder] || [];
    setFiles(fileList);
    setSelectedFileIdx(0);
    setNotes(localStorage.getItem(`notes-day${dayId}`) || "");
    setError("");

    if (fileList.length === 0) {
      setFileContent("");
      setLoading(false);
      setError(`No files are listed for ${dayFolder}. Check src/data/daysFiles.json and ensure files are in /public/${dayFolder}/.`);
    }
  }, [dayId, dayFolder]);

  useEffect(() => {
    if (files.length > 0 && files[selectedFileIdx]) {
      setLoading(true);
      setError("");
      fetchFileContent(dayFolder, files[selectedFileIdx])
        .then(content => {
          setFileContent(content);
          setLoading(false);
        })
        .catch((fetchError) => {
          setFileContent("");
          setLoading(false);
          console.error("Fetch error for", `${dayFolder}/${files[selectedFileIdx]}` , fetchError);
          setError(`Failed to load: ${files[selectedFileIdx]}. Ensure it exists at /public/${dayFolder}/${files[selectedFileIdx]}.`);
        });
    } else if (files.length === 0 && !error) {
      setError(`No files to display for ${dayFolder}.`);
      setLoading(false);
    }
  }, [selectedFileIdx, files, dayFolder, error]);

  const handleCopyRunCommand = (fileName) => {
    const command = `g++ ${dayFolder}/${fileName} -o ${fileName.split('.')[0]} && ./${fileName.split('.')[0]}`;
    navigator.clipboard.writeText(command).then(() => {
      setCopied(true);
      setTimeout(() => setCopied(false), 2000);
    });
  };

  const handleNoteChange = (e) => {
    setNotes(e.target.value);
    localStorage.setItem(`notes-day${dayId}`, e.target.value);
  };

  return (
    <div className="min-h-screen flex flex-col pt-4 pb-8 px-2 md:px-8 text-gray-900 dark:text-white">
      {loading && <Loader />}
      <div className="max-w-7xl w-full mx-auto flex flex-col gap-6">
        {/* Header */}
        <div className="flex flex-col md:flex-row md:items-center md:justify-between gap-2 mb-2">
          <div>
            <h1 className="text-3xl md:text-4xl font-bold tracking-tight mb-1 text-gray-900 dark:text-white">Day {dayNum}</h1>
            <p className="text-lg text-blue-600 dark:text-blue-200 font-medium">C++ Challenge - Explore, Learn, Run & Note</p>
          </div>
          <div className="flex gap-2 mt-2 md:mt-0">
            {dayNum > 1 && (
              <Link to={`/day/${(dayNum - 1).toString().padStart(2, "0")}`} className="px-4 py-2 rounded bg-gray-200 dark:bg-[#232946] text-gray-800 dark:text-white hover:bg-gray-300 dark:hover:bg-blue-800 transition font-semibold shadow">&larr; Prev</Link>
            )}
            {dayNum < 30 && (
              <Link to={`/day/${(dayNum + 1).toString().padStart(2, "0")}`} className="px-4 py-2 rounded bg-gray-200 dark:bg-[#232946] text-gray-800 dark:text-white hover:bg-gray-300 dark:hover:bg-blue-800 transition font-semibold shadow">Next &rarr;</Link>
            )}
            <Link to="/" className="px-4 py-2 rounded bg-gray-200 dark:bg-[#232946] text-purple-600 dark:text-purple-300 hover:bg-gray-300 dark:hover:bg-purple-700 hover:text-white dark:hover:text-white transition font-semibold shadow">Home</Link>
          </div>
        </div>

        {/* File Tabs */}
        <div className="flex gap-2 overflow-x-auto pb-2">
          {files.map((file, idx) => (
            <button
              key={file}
              onClick={() => setSelectedFileIdx(idx)}
              className={`flex items-center gap-1 px-4 py-2 rounded-t-lg font-semibold transition border-b-2 
                          ${selectedFileIdx === idx 
                            ? 'bg-white dark:bg-[#232946] text-blue-600 dark:text-blue-300 border-blue-500 dark:border-blue-400' 
                            : 'bg-gray-100 dark:bg-[#181c2b] text-gray-700 dark:text-gray-300 border-transparent hover:bg-gray-200 dark:hover:bg-[#232946]'}`}
            >
              {getFileIcon(file)}
              {file}
            </button>
          ))}
        </div>

        {/* Main Content Layout */}
        <div className="flex flex-col lg:flex-row gap-6">
          {/* Main File Content */}
          <div className="flex-1 bg-white dark:bg-[#232946] rounded-xl shadow-lg p-6 min-h-[400px] max-w-full overflow-x-auto">
            <div className="flex items-center justify-between mb-4">
              <span className="text-sm text-blue-600 dark:text-blue-200 font-mono">{files[selectedFileIdx] || 'No file selected.'}</span>
              {files[selectedFileIdx] && (
                <div className="flex gap-2">
                  <a
                    href={`/${dayFolder}/${files[selectedFileIdx]}`}
                    download
                    className="p-2 rounded bg-gray-200 dark:bg-[#181c2b] text-blue-600 dark:text-blue-200 hover:bg-gray-300 dark:hover:bg-blue-900 transition"
                    title="Download file"
                  >
                    <FaDownload />
                  </a>
                </div>
              )}
            </div>
            <div className="bg-gray-50 dark:bg-[#1a1f33] rounded-lg p-4 overflow-x-auto prose prose-sm sm:prose lg:prose-lg xl:prose-xl dark:prose-invert max-w-none min-h-[300px]">
              {error ? (
                <div className="text-red-500 dark:text-red-400 font-semibold text-center py-8">{error}</div>
              ) : files[selectedFileIdx] ? (
                getFileType(files[selectedFileIdx]) === "md" ? (
                  <ReactMarkdown>{fileContent}</ReactMarkdown>
                ) : getFileType(files[selectedFileIdx]) === "cpp" ? (
                  <SyntaxHighlighter 
                    language="cpp" 
                    style={theme === 'dark' ? atomDark : prismLight}
                    showLineNumbers 
                    wrapLines={true} 
                    lineProps={{style: {wordBreak: 'break-all', whiteSpace: 'pre-wrap'}}}
                  >
                    {String(fileContent)}
                  </SyntaxHighlighter>
                ) : getFileType(files[selectedFileIdx]) === "txt" ? (
                  <pre className="whitespace-pre-wrap break-all">{fileContent}</pre>
                ) : (
                  <pre className="whitespace-pre-wrap break-all text-gray-500 dark:text-gray-400">(Binary or unsupported file type)</pre>
                )
              ) : (
                 <div className="text-gray-500 dark:text-gray-400 text-center py-8">
                  {files.length === 0 ? "No files available for this day." : "Please select a file."}
                </div>
              )}
            </div>
          </div>

          {/* Sidebar */}
          <div className="w-full lg:w-80 flex-shrink-0 flex flex-col gap-6">
            {/* Files List */}
            <div className="bg-white dark:bg-[#232946] rounded-xl shadow-lg p-4">
              <h3 className="text-lg font-semibold text-blue-600 dark:text-blue-200 mb-2 flex items-center"><FaFileAlt className="mr-2" />Files in This Day</h3>
              <ul className="space-y-2">
                {files.map((file, idx) => (
                  <li 
                    key={file} 
                    className={`flex items-center gap-2 px-2 py-1 rounded cursor-pointer 
                                ${selectedFileIdx === idx 
                                  ? 'bg-gray-100 dark:bg-[#1a1f33] text-blue-600 dark:text-blue-300' 
                                  : 'text-gray-700 dark:text-gray-300 hover:bg-gray-100 dark:hover:bg-[#1a1f33]'}`} 
                    onClick={() => setSelectedFileIdx(idx)}
                  >
                    {getFileIcon(file)}
                    <span className="truncate">{file}</span>
                  </li>
                ))}
              </ul>
            </div>
            {/* Run & Learn */}
            <div className="bg-white dark:bg-[#232946] rounded-xl shadow-lg p-4 flex flex-col gap-3">
              <h3 className="text-lg font-semibold text-blue-600 dark:text-blue-200 mb-2 flex items-center"><FaTerminal className="mr-2" />Run & Learn</h3>
              {files[selectedFileIdx] && getFileType(files[selectedFileIdx]) === "cpp" && (
                <button
                  onClick={() => handleCopyRunCommand(files[selectedFileIdx])}
                  className={`w-full flex items-center justify-center gap-2 px-4 py-2 rounded bg-blue-500 dark:bg-blue-600 text-white font-semibold hover:bg-blue-600 dark:hover:bg-blue-800 transition ${copied ? 'opacity-70' : ''}`}
                >
                  {copied ? 'Copied!' : 'Copy Run Command'}
                </button>
              )}
              <a
                href="https://www.onlinegdb.com/online_c++_compiler"
                target="_blank"
                rel="noopener noreferrer"
                className="w-full flex items-center justify-center gap-2 px-4 py-2 rounded bg-purple-500 dark:bg-purple-600 text-white font-semibold hover:bg-purple-600 dark:hover:bg-purple-800 transition"
              >
                Run Online <FaTerminal />
              </a>
            </div>
            {/* Notes */}
            <div className="bg-white dark:bg-[#232946] rounded-xl shadow-lg p-4 flex flex-col gap-2">
              <h3 className="text-lg font-semibold text-blue-600 dark:text-blue-200 mb-2 flex items-center"><FaRegStickyNote className="mr-2" />Code Notes</h3>
              <textarea
                className="w-full min-h-[80px] rounded bg-gray-100 dark:bg-[#1a1f33] text-gray-900 dark:text-white p-2 resize-vertical focus:outline-none focus:ring-2 focus:ring-blue-500 dark:focus:ring-blue-400"
                placeholder="Write your notes here..."
                value={notes}
                onChange={handleNoteChange}
              />
              <button
                onClick={() => setNotes("")}
                className="self-end text-xs text-blue-500 dark:text-blue-300 hover:underline"
              >
                Clear
              </button>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Day;