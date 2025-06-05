import React from "react";
import { Link } from "react-router-dom";
import { FaGithub, FaSun, FaMoon, FaLaptopCode } from "react-icons/fa";
import { useTheme } from "../contexts/ThemeContext";

const Navbar = () => {
  const { theme, toggleTheme } = useTheme();

  return (
    <nav className="fixed top-0 left-0 right-0 z-40 bg-white/80 dark:bg-black/30 backdrop-blur-md shadow-lg transition-colors duration-500">
      <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
        <div className="flex items-center justify-between h-16">
          <div className="flex items-center">
            <Link to="/" className="flex items-center text-2xl font-bold text-gray-800 dark:text-white hover:text-cyan-500 dark:hover:text-cyan-400 transition-colors duration-300">
              <FaLaptopCode className="mr-2 text-cyan-600 dark:text-cyan-400" />
              30 Days of C++
            </Link>
          </div>
          <div className="flex items-center">
            {/* Optional: Add other nav links here if needed later, e.g., About, Blog */}
            {/* <Link to="/about" className="text-gray-300 hover:text-white px-3 py-2 rounded-md text-sm font-medium">About</Link> */}
            {/* 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13*/}
            <a
              href="https://github.com/Bhanu-partap-13/45-Days-Of-C-/tree/main" // Update with your actual repo link
              target="_blank"
              rel="noopener noreferrer"
              className="text-2xl text-gray-600 dark:text-gray-300 hover:text-cyan-500 dark:hover:text-cyan-400 transition-colors duration-300 p-2 ml-4"
              aria-label="GitHub Repository"
              title="GitHub Repository"
            >
              <FaGithub />
            </a>
            <button
              onClick={toggleTheme}
              className="text-2xl text-gray-600 dark:text-gray-300 hover:text-yellow-500 dark:hover:text-yellow-400 transition-colors duration-300 p-2 ml-2"
              aria-label="Toggle theme"
              title="Toggle Theme"
            >
              {theme === 'dark' ? <FaSun /> : <FaMoon />}
            </button>
          </div>
        </div>
      </div>
    </nav>
  );
};

export default Navbar;

// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13