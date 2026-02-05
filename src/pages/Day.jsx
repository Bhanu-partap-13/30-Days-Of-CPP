import React, { useState, useEffect } from "react";
import { useParams, Link } from "react-router-dom";
import ReactMarkdown from "react-markdown";
import { FaFileCode, FaFileAlt, FaDownload, FaTerminal, FaRegStickyNote } from "react-icons/fa";
import daysFiles from "../data/daysFiles.json";
import Loader from "../components/Loader";
import CodeBlock from "../components/CodeBlock";
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
    <div className="min-h-screen bg-gray-50 dark:bg-gray-900 pt-4 pb-8 px-2 md:px-8">
      {loading && <Loader />}
      <div className="max-w-7xl w-full mx-auto flex flex-col gap-6">
        {/* Header */}
        <div className="flex flex-col md:flex-row md:items-center md:justify-between gap-2 mb-2">
          <div>
            <h1 className="text-3xl md:text-4xl font-bold tracking-tight mb-1 text-gray-900 dark:text-white">Day {dayNum}</h1>
            <p className="text-lg text-gray-600 dark:text-gray-400 font-medium">C++ Challenge - Explore, Learn, Run & Note</p>
          </div>
          <div className="flex gap-2 mt-2 md:mt-0">
            {dayNum > 1 && (
              <Link to={`/day/${(dayNum - 1).toString().padStart(2, "0")}`} className="px-4 py-2 rounded-lg bg-white dark:bg-gray-800 text-gray-800 dark:text-white hover:bg-gray-100 dark:hover:bg-gray-700 transition font-medium shadow border border-gray-200 dark:border-gray-700">&larr; Prev</Link>
            )}
            {dayNum < 30 && (
              <Link to={`/day/${(dayNum + 1).toString().padStart(2, "0")}`} className="px-4 py-2 rounded-lg bg-white dark:bg-gray-800 text-gray-800 dark:text-white hover:bg-gray-100 dark:hover:bg-gray-700 transition font-medium shadow border border-gray-200 dark:border-gray-700">Next &rarr;</Link>
            )}
            <Link to="/" className="px-4 py-2 rounded-lg bg-blue-500 dark:bg-blue-600 text-white hover:bg-blue-600 dark:hover:bg-blue-700 transition font-medium shadow">Home</Link>
          </div>
        </div>

        {/* File Tabs */}
        <div className="flex gap-2 overflow-x-auto pb-2 custom-scrollbar">
          {files.map((file, idx) => (
            <button
              key={file}
              onClick={() => setSelectedFileIdx(idx)}
              className={`flex items-center gap-1 px-4 py-2 rounded-lg font-medium transition whitespace-nowrap
                          ${selectedFileIdx === idx 
                            ? 'bg-white dark:bg-gray-800 text-blue-600 dark:text-blue-400 shadow-md border border-blue-200 dark:border-blue-800' 
                            : 'bg-gray-100 dark:bg-gray-800/50 text-gray-700 dark:text-gray-300 hover:bg-gray-200 dark:hover:bg-gray-800 border border-transparent'}`}
            >
              {getFileIcon(file)}
              {file}
            </button>
          ))}
        </div>

        {/* Main Content Layout */}
        <div className="flex flex-col lg:flex-row gap-6">
          {/* Main File Content */}
          <div className="flex-1 bg-white dark:bg-gray-800 rounded-xl shadow-lg p-6 border border-gray-200 dark:border-gray-700">
            <div className="flex items-center justify-between mb-4">
              <span className="text-sm text-blue-600 dark:text-blue-400 font-mono">{files[selectedFileIdx] || 'No file selected.'}</span>
              {files[selectedFileIdx] && (
                <a
                  href={`/${dayFolder}/${files[selectedFileIdx]}`}
                  download
                  className="p-2 rounded-lg bg-gray-100 dark:bg-gray-700 text-blue-600 dark:text-blue-400 hover:bg-gray-200 dark:hover:bg-gray-600 transition"
                  title="Download file"
                >
                  <FaDownload />
                </a>
              )}
            </div>
            <div className="prose prose-sm sm:prose lg:prose-lg dark:prose-invert max-w-none">
              {error ? (
                <div className="text-red-500 dark:text-red-400 font-semibold text-center py-8 bg-red-50 dark:bg-red-900/20 rounded-lg">{error}</div>
              ) : files[selectedFileIdx] ? (
                getFileType(files[selectedFileIdx]) === "md" ? (
                  <div className="bg-gray-50 dark:bg-gray-900/50 rounded-lg p-6">
                    <ReactMarkdown>{fileContent}</ReactMarkdown>
                  </div>
                ) : getFileType(files[selectedFileIdx]) === "cpp" ? (
                  <CodeBlock code={fileContent} language="cpp" fileName={files[selectedFileIdx]} />
                ) : getFileType(files[selectedFileIdx]) === "txt" ? (
                  <pre className="whitespace-pre-wrap break-all bg-gray-50 dark:bg-gray-900/50 p-4 rounded-lg">{fileContent}</pre>
                ) : (
                  <pre className="whitespace-pre-wrap break-all text-gray-500 dark:text-gray-400 bg-gray-50 dark:bg-gray-900/50 p-4 rounded-lg">(Binary or unsupported file type)</pre>
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
            <div className="bg-white dark:bg-gray-800 rounded-xl shadow-lg p-4 border border-gray-200 dark:border-gray-700">
              <h3 className="text-lg font-semibold text-gray-900 dark:text-white mb-3 flex items-center"><FaFileAlt className="mr-2 text-blue-500" />Files</h3>
              <ul className="space-y-2 max-h-64 overflow-y-auto custom-scrollbar">
                {files.map((file, idx) => (
                  <li 
                    key={file} 
                    className={`flex items-center gap-2 px-3 py-2 rounded-lg cursor-pointer transition
                                ${selectedFileIdx === idx 
                                  ? 'bg-blue-50 dark:bg-blue-900/20 text-blue-600 dark:text-blue-400' 
                                  : 'text-gray-700 dark:text-gray-300 hover:bg-gray-100 dark:hover:bg-gray-700'}`} 
                    onClick={() => setSelectedFileIdx(idx)}
                  >
                    {getFileIcon(file)}
                    <span className="truncate text-sm">{file}</span>
                  </li>
                ))}
              </ul>
            </div>
            
            {/* Run & Learn */}
            <div className="bg-white dark:bg-gray-800 rounded-xl shadow-lg p-4 flex flex-col gap-3 border border-gray-200 dark:border-gray-700">
              <h3 className="text-lg font-semibold text-gray-900 dark:text-white mb-2 flex items-center"><FaTerminal className="mr-2 text-green-500" />Quick Actions</h3>
              {files[selectedFileIdx] && getFileType(files[selectedFileIdx]) === "cpp" && (
                <button
                  onClick={() => handleCopyRunCommand(files[selectedFileIdx])}
                  className={`w-full flex items-center justify-center gap-2 px-4 py-2 rounded-lg bg-blue-500 text-white font-medium hover:bg-blue-600 transition ${copied ? 'opacity-70' : ''}`}
                >
                  {copied ? 'Copied!' : 'Copy Run Command'}
                </button>
              )}
              <a
                href="https://www.onlinegdb.com/online_c++_compiler"
                target="_blank"
                rel="noopener noreferrer"
                className="w-full flex items-center justify-center gap-2 px-4 py-2 rounded-lg bg-purple-500 text-white font-medium hover:bg-purple-600 transition"
              >
                Run Online <FaTerminal />
              </a>
            </div>
            
            {/* Notes */}
            <div className="bg-white dark:bg-gray-800 rounded-xl shadow-lg p-4 flex flex-col gap-2 border border-gray-200 dark:border-gray-700">
              <h3 className="text-lg font-semibold text-gray-900 dark:text-white mb-2 flex items-center"><FaRegStickyNote className="mr-2 text-yellow-500" />Notes</h3>
              <textarea
                className="w-full min-h-[100px] rounded-lg bg-gray-50 dark:bg-gray-900 text-gray-900 dark:text-white p-3 resize-vertical focus:outline-none focus:ring-2 focus:ring-blue-500 border border-gray-200 dark:border-gray-700"
                placeholder="Write your notes here..."
                value={notes}
                onChange={handleNoteChange}
              />
              <button
                onClick={() => setNotes("")}
                className="self-end text-xs text-blue-500 dark:text-blue-400 hover:underline"
              >
                Clear Notes
              </button>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Day;

// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13