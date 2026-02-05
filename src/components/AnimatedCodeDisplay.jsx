import React, { useState, useEffect } from 'react';
import { motion, AnimatePresence } from 'framer-motion';
import { Prism as SyntaxHighlighter } from 'react-syntax-highlighter';
import { vscDarkPlus } from 'react-syntax-highlighter/dist/esm/styles/prism';
import { atomOneLight } from 'react-syntax-highlighter/dist/esm/styles/hljs';
import { useTheme } from '../contexts/ThemeContext';

const AnimatedCodeDisplay = () => {
  const { theme } = useTheme();
  const [currentIndex, setCurrentIndex] = useState(0);

  const codeExamples = [
    {
      topic: "Binary Search",
      category: "Array",
      code: `int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}`
    },
    {
      topic: "Bubble Sort",
      category: "Sorting",
      code: `void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}`
    },
    {
      topic: "Two Sum",
      category: "Array",
      code: `vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (map.count(complement)) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}`
    },
    {
      topic: "Linked List Reversal",
      category: "Linked List",
      code: `ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    
    while (curr != nullptr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}`
    },
    {
      topic: "Max Subarray (Kadane's)",
      category: "Array",
      code: `int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], 
                        currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}`
    }
  ];

  useEffect(() => {
    const interval = setInterval(() => {
      setCurrentIndex((prev) => (prev + 1) % codeExamples.length);
    }, 4000);

    return () => clearInterval(interval);
  }, [codeExamples.length]);

  const currentExample = codeExamples[currentIndex];

  return (
    <div className="relative w-full h-full">
      <AnimatePresence mode="wait">
        <motion.div
          key={currentIndex}
          initial={{ opacity: 0, y: 20 }}
          animate={{ opacity: 1, y: 0 }}
          exit={{ opacity: 0, y: -20 }}
          transition={{ duration: 0.5 }}
          className="w-full h-full"
        >
          {/* Topic Badge */}
          <div className="flex items-center gap-3 mb-4">
            <span className="px-3 py-1 bg-blue-100 dark:bg-blue-900/30 text-blue-600 dark:text-blue-400 rounded-full text-xs font-semibold">
              {currentExample.category}
            </span>
            <h3 className="text-lg font-bold text-gray-900 dark:text-white">
              {currentExample.topic}
            </h3>
          </div>

          {/* Code Block */}
          <div className="rounded-xl overflow-hidden shadow-2xl border border-gray-200 dark:border-gray-700">
            <div className="bg-gray-800 dark:bg-gray-900 px-4 py-2 flex items-center gap-2">
              <div className="flex gap-1.5">
                <div className="w-3 h-3 rounded-full bg-red-500"></div>
                <div className="w-3 h-3 rounded-full bg-yellow-500"></div>
                <div className="w-3 h-3 rounded-full bg-green-500"></div>
              </div>
              <span className="text-xs text-gray-400 ml-2 font-mono">
                {currentExample.topic.toLowerCase().replace(/\s/g, '_')}.cpp
              </span>
            </div>
            <SyntaxHighlighter
              language="cpp"
              style={theme === 'dark' ? vscDarkPlus : atomOneLight}
              customStyle={{
                margin: 0,
                padding: '1.5rem',
                background: theme === 'dark' ? '#1f2937' : '#f9fafb',
                fontSize: '0.75rem',
                lineHeight: '1.5',
                maxHeight: '320px',
              }}
              showLineNumbers
              wrapLines
            >
              {currentExample.code}
            </SyntaxHighlighter>
          </div>

          {/* Progress Indicators */}
          <div className="flex justify-center gap-2 mt-4">
            {codeExamples.map((_, index) => (
              <button
                key={index}
                onClick={() => setCurrentIndex(index)}
                className={`h-1.5 rounded-full transition-all duration-300 ${
                  index === currentIndex
                    ? 'w-8 bg-blue-600 dark:bg-blue-400'
                    : 'w-1.5 bg-gray-300 dark:bg-gray-600 hover:bg-gray-400 dark:hover:bg-gray-500'
                }`}
                aria-label={`Go to ${codeExamples[index].topic}`}
              />
            ))}
          </div>
        </motion.div>
      </AnimatePresence>
    </div>
  );
};

export default AnimatedCodeDisplay;
