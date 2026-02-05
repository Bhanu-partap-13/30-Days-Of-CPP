import React, { useState, useEffect } from 'react';
import { motion } from 'framer-motion';
import { FiCode } from 'react-icons/fi';
import CodeBlock from '../components/CodeBlock';
import Loader from '../components/Loader';

const Leetcode = () => {
  const [files, setFiles] = useState([]);
  const [selectedFile, setSelectedFile] = useState(null);
  const [fileContent, setFileContent] = useState('');
  const [loading, setLoading] = useState(true);

  useEffect(() => {
    loadFiles();
  }, []);

  useEffect(() => {
    if (selectedFile) {
      loadFileContent(selectedFile);
    }
  }, [selectedFile]);

  const loadFiles = () => {
    // List of known Leetcode files
    const leetcodeFiles = ['153.cpp', '1760.cpp', '239.cpp', '33.cpp', '643.cpp', '680.cpp', '74.cpp'];
    setFiles(leetcodeFiles);
    if (leetcodeFiles.length > 0) {
      setSelectedFile(leetcodeFiles[0]);
    }
    setLoading(false);
  };

  const loadFileContent = async (fileName) => {
    try {
      const response = await fetch(`/Leetcode/${fileName}`);
      const content = await response.text();
      setFileContent(content);
    } catch (error) {
      console.error('Error loading file content:', error);
      setFileContent('// Error loading file content');
    }
  };

  const getProblemNumber = (fileName) => {
    return fileName.replace('.cpp', '');
  };

  if (loading) {
    return <Loader />;
  }

  return (
    <div className="min-h-screen bg-gray-50 dark:bg-gray-900">
      <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-8">
        {/* Header */}
        <motion.div
          initial={{ opacity: 0, y: -20 }}
          animate={{ opacity: 1, y: 0 }}
          className="mb-8 text-center"
        >
          <div className="inline-flex items-center justify-center w-16 h-16 rounded-full bg-gradient-to-br from-orange-500 to-red-500 text-white text-2xl mb-4">
            <FiCode />
          </div>
          <h1 className="text-3xl md:text-4xl font-bold text-gray-900 dark:text-white mb-2">
            LeetCode Solutions
          </h1>
          <p className="text-gray-600 dark:text-gray-400">
            {files.length} problems solved in C++
          </p>
        </motion.div>

        <div className="grid grid-cols-1 lg:grid-cols-4 gap-6">
          {/* Problem List */}
          <motion.div
            initial={{ opacity: 0, x: -20 }}
            animate={{ opacity: 1, x: 0 }}
            className="lg:col-span-1"
          >
            <div className="bg-white dark:bg-gray-800 rounded-xl shadow-lg p-4 sticky top-20">
              <h2 className="text-lg font-semibold text-gray-900 dark:text-white mb-4">
                Problems
              </h2>
              <div className="space-y-2 max-h-[calc(100vh-200px)] overflow-y-auto">
                {files.map((file) => (
                  <button
                    key={file}
                    onClick={() => setSelectedFile(file)}
                    className={`w-full text-left px-3 py-2 rounded-lg text-sm transition-colors ${
                      selectedFile === file
                        ? 'bg-orange-50 dark:bg-orange-900/20 text-orange-600 dark:text-orange-400 font-medium'
                        : 'text-gray-700 dark:text-gray-300 hover:bg-gray-100 dark:hover:bg-gray-700'
                    }`}
                  >
                    <div className="flex items-center">
                      <span className="font-mono">#{getProblemNumber(file)}</span>
                    </div>
                  </button>
                ))}
              </div>
            </div>
          </motion.div>

          {/* Code Display */}
          <motion.div
            initial={{ opacity: 0, x: 20 }}
            animate={{ opacity: 1, x: 0 }}
            className="lg:col-span-3"
          >
            <div className="bg-white dark:bg-gray-800 rounded-xl shadow-lg p-6">
              <div className="flex items-center justify-between mb-4">
                <h2 className="text-xl font-semibold text-gray-900 dark:text-white">
                  Problem #{getProblemNumber(selectedFile)}
                </h2>
                <a
                  href={`https://leetcode.com/problems/${getProblemNumber(selectedFile)}/`}
                  target="_blank"
                  rel="noopener noreferrer"
                  className="text-sm text-blue-600 dark:text-blue-400 hover:underline"
                >
                  View on LeetCode →
                </a>
              </div>
              {fileContent ? (
                <CodeBlock code={fileContent} language="cpp" fileName={selectedFile} />
              ) : (
                <div className="text-center py-12 text-gray-500 dark:text-gray-400">
                  Select a problem to view its solution
                </div>
              )}
            </div>
          </motion.div>
        </div>
      </div>
    </div>
  );
};

export default Leetcode;
