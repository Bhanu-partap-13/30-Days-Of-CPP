import React from 'react';
import { Link } from 'react-router-dom';
import { motion } from 'framer-motion';
import { 
  FaLayerGroup, 
  FaList, 
  FaSearch, 
  FaSort, 
  FaLink,
  FaProjectDiagram
} from 'react-icons/fa';

const AllTopics = () => {
  const topics = [
    {
      name: 'Array',
      icon: <FaLayerGroup />,
      color: 'from-blue-500 to-cyan-500',
      description: 'Array manipulation and algorithms',
      count: 9
    },
    {
      name: 'LinkedList',
      icon: <FaLink />,
      color: 'from-purple-500 to-pink-500',
      description: 'Linked list operations and problems',
      count: 1
    },
    {
      name: 'Sort',
      icon: <FaSort />,
      color: 'from-green-500 to-teal-500',
      description: 'Sorting algorithms and techniques',
      count: 6
    },
    {
      name: 'Search',
      icon: <FaSearch />,
      color: 'from-orange-500 to-red-500',
      description: 'Searching algorithms',
      count: 0
    },
    {
      name: 'Pattern Matching',
      icon: <FaProjectDiagram />,
      color: 'from-indigo-500 to-purple-500',
      description: 'Pattern matching algorithms',
      count: 0
    },
  ];

  const containerVariants = {
    hidden: { opacity: 0 },
    visible: {
      opacity: 1,
      transition: {
        staggerChildren: 0.1
      }
    }
  };

  const itemVariants = {
    hidden: { y: 20, opacity: 0 },
    visible: {
      y: 0,
      opacity: 1,
      transition: {
        duration: 0.5
      }
    }
  };

  return (
    <div className="min-h-screen bg-gray-50 dark:bg-gray-900 py-12 px-4 sm:px-6 lg:px-8">
      <div className="max-w-7xl mx-auto">
        {/* Header */}
        <motion.div
          initial={{ opacity: 0, y: -20 }}
          animate={{ opacity: 1, y: 0 }}
          transition={{ duration: 0.6 }}
          className="text-center mb-12"
        >
          <h1 className="text-4xl md:text-5xl font-bold text-gray-900 dark:text-white mb-4">
            DSA Topics
          </h1>
          <p className="text-lg text-gray-600 dark:text-gray-400 max-w-2xl mx-auto">
            Explore various Data Structures and Algorithms topics with comprehensive C++ examples
          </p>
        </motion.div>

        {/* Topics Grid */}
        <motion.div
          variants={containerVariants}
          initial="hidden"
          animate="visible"
          className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-6"
        >
          {topics.map((topic) => (
            <motion.div key={topic.name} variants={itemVariants}>
              <Link
                to={`/topics/${topic.name}`}
                className="block group"
              >
                <div className="relative overflow-hidden rounded-xl bg-white dark:bg-gray-800 p-6 shadow-lg hover:shadow-2xl transition-all duration-300 border border-gray-200 dark:border-gray-700 hover:scale-105">
                  {/* Gradient overlay */}
                  <div className={`absolute top-0 right-0 w-32 h-32 bg-gradient-to-br ${topic.color} opacity-10 rounded-full -mr-16 -mt-16 group-hover:scale-150 transition-transform duration-500`} />
                  
                  <div className="relative z-10">
                    {/* Icon */}
                    <div className={`w-12 h-12 rounded-lg bg-gradient-to-br ${topic.color} flex items-center justify-center text-white text-xl mb-4 group-hover:scale-110 transition-transform duration-300`}>
                      {topic.icon}
                    </div>
                    
                    {/* Title */}
                    <h3 className="text-xl font-semibold text-gray-900 dark:text-white mb-2 group-hover:text-blue-600 dark:group-hover:text-blue-400 transition-colors">
                      {topic.name}
                    </h3>
                    
                    {/* Description */}
                    <p className="text-gray-600 dark:text-gray-400 text-sm mb-4">
                      {topic.description}
                    </p>
                    
                    {/* Count badge */}
                    <div className="flex items-center justify-between">
                      <span className="text-xs font-medium text-gray-500 dark:text-gray-500">
                        {topic.count} {topic.count === 1 ? 'problem' : 'problems'}
                      </span>
                      <span className="text-blue-600 dark:text-blue-400 group-hover:translate-x-2 transition-transform duration-300">
                        →
                      </span>
                    </div>
                  </div>
                </div>
              </Link>
            </motion.div>
          ))}
        </motion.div>
      </div>
    </div>
  );
};

export default AllTopics;
