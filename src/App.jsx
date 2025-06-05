import React, { Suspense } from "react";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import Navbar from "./components/Navbar";
import Footer from "./components/Footer";
import Loader from "./components/Loader";
import { ThemeProvider } from "./contexts/ThemeContext";

// Lazy load pages
const Home = React.lazy(() => import("./pages/Home"));
const Day = React.lazy(() => import("./pages/Day"));

function App() {
  return (
    <ThemeProvider>
      <Router>
        <div className="flex flex-col min-h-screen bg-gray-100 dark:bg-gradient-to-br dark:from-[#181c2b] dark:via-[#232946] dark:to-[#181c2b]">
          <Navbar />
          <main className="flex-1 pt-16">
            <Suspense fallback={<Loader />}>
              <Routes>
                <Route path="/" element={<Home />} />
                <Route path="/day/:dayId" element={<Day />} />
              </Routes>
            </Suspense>
          </main>
          <Footer />
        </div>
      </Router>
    </ThemeProvider>
  );
}

export default App;


// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13