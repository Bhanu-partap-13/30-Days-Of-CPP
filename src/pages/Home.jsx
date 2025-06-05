import React from "react";
import { Link } from "react-router-dom";
import { motion } from "framer-motion";
import daysFiles from "../data/daysFiles.json";
import { FaFolderOpen, FaCodeBranch, FaRocket } from "react-icons/fa";
import ParticleBackground from "../components/ParticleBackground";

const days = Array.from({ length: 30 }, (_, i) => i + 1);

const cardVariants = {
  hidden: { opacity: 0, y: 50, scale: 0.9 },
  visible: (i) => ({
    opacity: 1,
    y: 0,
    scale: 1,
    transition: { delay: i * 0.05, type: "spring", stiffness: 100, damping: 12 },
  }),
};

const Home = () => (
  <div className="relative min-h-screen flex flex-col items-center justify-center text-white overflow-hidden">
    <ParticleBackground />
    <div className="relative z-10 w-full max-w-7xl px-4 py-16 flex flex-col items-center">
      {/* Hero Section */}
      <motion.header 
        initial={{ opacity: 0, y: -50 }}
        animate={{ opacity: 1, y: 0 }}
        transition={{ duration: 0.8, ease: "easeOut" }}
        className="text-center mb-16 md:mb-24 pt-12 md:pt-0"
      >
        <h1 className="text-5xl sm:text-6xl md:text-7xl lg:text-8xl font-extrabold tracking-tight mb-4">
          <span 
            className="bg-clip-text text-transparent bg-gradient-to-r from-[#00c6ff] via-[#0072ff] to-[#c471ed] dark:from-[#00c6ff] dark:via-[#0072ff] dark:to-[#f64f59] bg-[length:200%_auto] animate-text-gradient animate-text-glow"
          >
            30 Days of CPP
          </span>
        </h1>
        <p className="text-lg md:text-2xl text-gray-600 dark:text-blue-200 font-medium max-w-3xl mx-auto mb-8">
          Your accelerated journey to mastering C++. Dive into daily challenges, explore real code, and build your expertise from the ground up.
        </p>
        <div className="flex flex-col sm:flex-row justify-center items-center gap-4">
          <motion.button 
            whileHover={{ scale: 1.05, boxShadow: "0px 0px 15px rgba(0, 198, 255, 0.7)" }}
            whileTap={{ scale: 0.95 }}
            className="px-8 py-3 bg-gradient-to-r from-blue-500 to-cyan-400 text-white font-semibold rounded-lg shadow-lg text-lg flex items-center gap-2"
            onClick={() => document.getElementById('days-grid')?.scrollIntoView({ behavior: 'smooth' })}
          >
            <FaRocket /> Start Your Journey
          </motion.button>
          <Link to="/day/01">
            <motion.button 
              whileHover={{ scale: 1.05, boxShadow: "0px 0px 15px rgba(196, 113, 237, 0.7)" }}
              whileTap={{ scale: 0.95 }}
              className="px-8 py-3 bg-gradient-to-r from-purple-500 to-pink-500 text-white font-semibold rounded-lg shadow-lg text-lg flex items-center gap-2"
            >
              <FaCodeBranch /> Go to Day 1
            </motion.button>
          </Link>
        </div>
      </motion.header>

      {/* About Section */}
      <section className="w-full flex flex-col items-center mb-16">
        <h2 className="text-3xl md:text-4xl font-bold text-center text-gray-800 dark:text-white mb-10">
          About This Journey
        </h2>
        <div className="w-full flex flex-col md:flex-row gap-10 justify-center items-stretch max-w-7xl">
          <motion.div
            className="flex-1 w-full max-w-[480px] h-36 bg-gradient-to-br from-blue-900/90 to-blue-800/90 backdrop-blur-lg rounded-2xl p-8 shadow-xl flex flex-col justify-center items-center text-center border border-blue-700"
            whileHover={{ scale: 1.03, transition: { duration: 0.2 } }}
          >
            <motion.div whileHover={{ scale: 1.05 }} className="text-3xl mb-3 text-cyan-400">{"</>"}</motion.div>
            <motion.h3 whileHover={{ scale: 1.05 }} className="text-xl font-bold text-white mb-2">Structured Learning</motion.h3>
            <motion.p whileHover={{ scale: 1.05 }} className="text-blue-100 text-sm">Each day focuses on specific C++ concepts, building on previous knowledge for optimal retention.</motion.p>
          </motion.div>
          <motion.div
            className="flex-1 w-full max-w-[480px] h-36 bg-gradient-to-br from-blue-900/90 to-blue-800/90 backdrop-blur-lg rounded-2xl p-8 shadow-xl flex flex-col justify-center items-center text-center border border-blue-700"
            whileHover={{ scale: 1.03, transition: { duration: 0.2 } }}
          >
            <motion.div whileHover={{ scale: 1.05 }} className="text-3xl mb-3 text-cyan-400">{"⚡"}</motion.div>
            <motion.h3 whileHover={{ scale: 1.05 }} className="text-xl font-bold text-white mb-2">Practical Code</motion.h3>
            <motion.p whileHover={{ scale: 1.05 }} className="text-blue-100 text-sm">Every concept comes with real-world coding examples that you can run and experiment with.</motion.p>
          </motion.div>
          <motion.div
            className="flex-1 w-full max-w-[480px] h-36 bg-gradient-to-br from-blue-900/90 to-blue-800/90 backdrop-blur-lg rounded-2xl p-8 shadow-xl flex flex-col justify-center items-center text-center border border-blue-700"
            whileHover={{ scale: 1.03, transition: { duration: 0.2 } }}
          >
            <motion.div whileHover={{ scale: 1.05 }} className="text-3xl mb-3 text-cyan-400">{"🎓"}</motion.div>
            <motion.h3 whileHover={{ scale: 1.05 }} className="text-xl font-bold text-white mb-2">Comprehensive Coverage</motion.h3>
            <motion.p whileHover={{ scale: 1.05 }} className="text-blue-100 text-sm">From core fundamentals to advanced topics like multithreading, networking, and design patterns.</motion.p>
          </motion.div>
        </div>
      </section>

      {/* Days Grid Section */}
      <section id="days-grid" className="w-full">
        <h2 className="text-3xl md:text-4xl font-bold text-center text-gray-800 dark:text-white mb-10 md:mb-12">
          Explore Each Day
        </h2>
        <motion.div
          className="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-3 gap-8 max-w-7xl mx-auto"
          initial="hidden"
          animate="visible"
          variants={{}}
        >
          {days.map((day, i) => {
            const dayKey = `Day${day.toString().padStart(2, "0")}`;
            const fileCount = daysFiles[dayKey]?.length || 0;
            return (
              <motion.div
                key={day}
                custom={i}
                variants={cardVariants}
                initial="hidden"
                animate="visible"
                className="relative bg-[#181f36] dark:bg-black/40 border border-blue-800 rounded-2xl shadow-xl p-8 flex flex-col items-center justify-center text-center transition-all duration-300 hover:border-cyan-500 dark:hover:border-cyan-400 hover:shadow-cyan-500/30 group overflow-hidden w-full max-w-[480px] h-36 mx-auto"
              >
                <motion.div 
                  className="flex items-center gap-2 mb-2"
                  whileHover={{ scale: 1.05 }}
                >
                  <span className="text-2xl text-cyan-400">{"</>"}</span>
                  <h3 className="text-3xl font-bold text-white">Day {day.toString().padStart(2,"0")}</h3>
                </motion.div>
                <div className="flex-grow flex flex-col items-center justify-center w-full">
                  <motion.div 
                    className="text-gray-300 mb-1 truncate w-full text-sm"
                    whileHover={{ scale: 1.05 }}
                  >
                    {/* Optionally, add a short description here if available */}
                  </motion.div>
                  <motion.div 
                    className="w-full flex items-center justify-center mt-1 mb-1"
                    whileHover={{ scale: 1.05 }}
                  >
                    <FaFolderOpen className="text-cyan-400 mr-2" /> 
                    <div className="text-sm text-blue-200">{fileCount} {fileCount === 1 ? 'Topic' : 'Topics'}</div>
                  </motion.div>
                </div>
                <Link
                  to={`/day/${day.toString().padStart(2, "0")}`}
                  className="absolute top-4 right-4 w-8 h-8 flex items-center justify-center rounded-full bg-blue-800 hover:bg-cyan-500 transition-colors text-white text-lg shadow-md"
                  title={`Go to Day ${day}`}
                >
                  <svg xmlns="http://www.w3.org/2000/svg" fill="none" viewBox="0 0 24 24" stroke="currentColor" className="w-5 h-5">
                    <path strokeLinecap="round" strokeLinejoin="round" strokeWidth={2} d="M9 5l7 7-7 7" />
                  </svg>
                </Link>
              </motion.div>
            );
          })}
        </motion.div>
      </section>
    </div>
  </div>
);

export default Home;