import React from "react";
import { FaGithub, FaTwitter, FaLinkedin, FaHeart } from "react-icons/fa";

const Footer = () => (
  <footer className="bg-black/30 backdrop-blur-md text-center py-8 shadow-inner_top_lg mt-auto">
    <div className="flex justify-center gap-6 mb-4">
      <a
        href="https://github.com/Bhanu-partap-13"
        target="_blank"
        rel="noopener noreferrer"
        className="text-2xl text-gray-400 hover:text-cyan-400 transition-colors duration-300"
        aria-label="GitHub Profile"
        title="GitHub Profile"
      >
        <FaGithub />
      </a>
      <a
        href="https://twitter.com/bhanupartap59"
        target="_blank"
        rel="noopener noreferrer"
        className="text-2xl text-gray-400 hover:text-sky-500 transition-colors duration-300"
        aria-label="Twitter Profile"
        title="Twitter Profile"
      >
        <FaTwitter />
      </a>
      <a
        href="https://www.linkedin.com/in/bhanu-partap-a49084274/"
        target="_blank"
        rel="noopener noreferrer"
        className="text-2xl text-gray-400 hover:text-blue-500 transition-colors duration-300"
        aria-label="LinkedIn Profile"
        title="LinkedIn Profile"
      >
        <FaLinkedin />
      </a>
    </div>
    <p className="text-gray-500 text-sm">
      &copy; {new Date().getFullYear()} 30 Days of C++. Crafted with <FaHeart className="inline text-red-500" /> by <a href="https://github.com/Bhanu-partap-13" target="_blank" rel="noopener noreferrer" className="text-cyan-400 hover:text-cyan-600 transition-colors duration-300">Bhanu Partap</a>.
    </p>
    <p className="text-xs text-gray-600 mt-1">
      Inspired by modern web designs. Built with React, Tailwind CSS, and lots of coffee.
    </p>
  </footer>
);

export default Footer;

// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13