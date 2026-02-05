import React from "react";
import { FaGithub, FaTwitter, FaLinkedin, FaHeart, FaCoffee } from "react-icons/fa";
import { SiLinkedin, SiGithub, SiBuymeacoffee } from "react-icons/si";

const Footer = () => {
  const socialLinks = [
    {
      name: "GitHub",
      url: "https://github.com/Bhanu-partap-13",
      icon: <SiGithub />,
      hoverColor: "hover:text-gray-900 dark:hover:text-white",
      bgHover: "hover:bg-gray-100 dark:hover:bg-gray-700"
    },
    {
      name: "LinkedIn",
      url: "https://www.linkedin.com/in/bhanu-partap-a49084274/",
      icon: <SiLinkedin />,
      hoverColor: "hover:text-blue-600 dark:hover:text-blue-400",
      bgHover: "hover:bg-blue-50 dark:hover:bg-blue-900/20"
    },
    {
      name: "Twitter",
      url: "https://twitter.com/bhanupartap59",
      icon: <FaTwitter />,
      hoverColor: "hover:text-sky-500 dark:hover:text-sky-400",
      bgHover: "hover:bg-sky-50 dark:hover:bg-sky-900/20"
    },
    {
      name: "Buy Me a Coffee",
      url: "https://buymeacoffee.com/bhanupartap13",
      icon: <SiBuymeacoffee />,
      hoverColor: "hover:text-yellow-600 dark:hover:text-yellow-400",
      bgHover: "hover:bg-yellow-50 dark:hover:bg-yellow-900/20"
    }
  ];

  return (
    <footer className="relative bg-white dark:bg-gray-900 border-t border-gray-200 dark:border-gray-800 mt-auto">
      {/* Gradient line at top */}
      <div className="absolute top-0 left-0 right-0 h-1 bg-gradient-to-r from-blue-500 via-purple-500 to-pink-500"></div>
      
      <div className="max-w-7xl mx-auto px-4 py-8">
        {/* Social Links */}
        <div className="flex justify-center gap-3 mb-6">
          {socialLinks.map((link) => (
            <a
              key={link.name}
              href={link.url}
              target="_blank"
              rel="noopener noreferrer"
              className={`group relative p-3 rounded-xl bg-gray-50 dark:bg-gray-800 text-gray-600 dark:text-gray-400 ${link.hoverColor} ${link.bgHover} transition-all duration-300 transform hover:scale-110 hover:-translate-y-1 shadow-sm hover:shadow-lg`}
              aria-label={link.name}
              title={link.name}
            >
              <span className="text-xl">{link.icon}</span>
              
              {/* Tooltip */}
              <span className="absolute -top-10 left-1/2 transform -translate-x-1/2 bg-gray-900 dark:bg-gray-700 text-white text-xs px-2 py-1 rounded opacity-0 group-hover:opacity-100 transition-opacity whitespace-nowrap pointer-events-none">
                {link.name}
              </span>
            </a>
          ))}
        </div>

        {/* Divider */}
        <div className="w-20 h-1 bg-gradient-to-r from-blue-500 to-purple-500 rounded-full mx-auto mb-6"></div>

        {/* Copyright */}
        <div className="text-center space-y-2">
          <p className="text-gray-700 dark:text-gray-300 text-sm font-medium">
            &copy; {new Date().getFullYear()} 30 Days of C++. Crafted with{" "}
            <FaHeart className="inline text-red-500 animate-pulse" /> by{" "}
            <a 
              href="https://github.com/Bhanu-partap-13" 
              target="_blank" 
              rel="noopener noreferrer" 
              className="text-blue-600 dark:text-blue-400 hover:text-blue-700 dark:hover:text-blue-300 font-semibold transition-colors"
            >
              Bhanu Partap
            </a>
            .
          </p>
          <p className="text-xs text-gray-600 dark:text-gray-400 flex items-center justify-center gap-2">
            Inspired by modern web designs. Built with React, Tailwind CSS, and lots of{" "}
            <FaCoffee className="text-amber-600 dark:text-amber-400 animate-bounce" />
          </p>
        </div>

        {/* Quick Links */}
        <div className="mt-6 flex justify-center gap-6 text-xs">
          <a 
            href="https://github.com/Bhanu-partap-13/30-Days-Of-CPP" 
            target="_blank" 
            rel="noopener noreferrer"
            className="text-gray-500 dark:text-gray-500 hover:text-blue-600 dark:hover:text-blue-400 transition-colors"
          >
            View Source
          </a>
          <span className="text-gray-300 dark:text-gray-700">•</span>
          <a 
            href="https://github.com/Bhanu-partap-13/30-Days-Of-CPP/blob/main/LICENSE" 
            target="_blank" 
            rel="noopener noreferrer"
            className="text-gray-500 dark:text-gray-500 hover:text-blue-600 dark:hover:text-blue-400 transition-colors"
          >
            MIT License
          </a>
          <span className="text-gray-300 dark:text-gray-700">•</span>
          <span className="text-gray-500 dark:text-gray-500">
            Made with passion
          </span>
        </div>
      </div>
    </footer>
  );
};

export default Footer;

// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13