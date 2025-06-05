import React from "react";
import { Link } from "react-router-dom";
import { motion } from "framer-motion";
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
const DayCard = ({ day }) => (
  <motion.div
    whileHover={{ scale: 1.05, boxShadow: "0 8px 32px rgba(100,0,200,0.2)" }}
    className="bg-white/80 dark:bg-gray-800/80 rounded-xl shadow-lg p-6 flex flex-col items-center transition-colors duration-500"
  >
    <h2 className="text-2xl font-bold text-purple-600 dark:text-purple-300 mb-2">
      Day {day}
    </h2>
    <p className="text-gray-700 dark:text-gray-300 mb-4">C++ Learning</p>
    <Link
      to={`/day/${day.toString().padStart(2, "0")}`}
      className="px-4 py-2 bg-gradient-to-r from-purple-500 to-pink-500 text-white rounded-lg shadow hover:from-pink-500 hover:to-purple-500 transition"
    >
      View Day
    </Link>
  </motion.div>
);

export default DayCard;

