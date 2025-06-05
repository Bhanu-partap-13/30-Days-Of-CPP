/** @type {import('tailwindcss').Config} */
export default {
    darkMode: 'class',
    content: [
      "./index.html",
      "./src/**/*.{js,jsx,ts,tsx}",
    ],
    theme: {
      extend: {
        backgroundImage: {
          'gradient-radial': 'radial-gradient(var(--tw-gradient-stops))',
          'gradient-conic': 'conic-gradient(var(--tw-gradient-stops))',
        },
        animation: {
          'text-gradient': 'text-gradient 10s ease-in-out infinite alternate',
          'text-glow': 'text-glow 2s ease-in-out infinite alternate',
        },
        keyframes: {
          'text-gradient': {
            '0%': { 'background-position': '0% 50%' },
            '100%': { 'background-position': '100% 50%' },
          },
          'text-glow': {
            '0%': { 
              textShadow: "0 0 5px #00c6ff, 0 0 10px #0072ff, 0 0 15px #c471ed, 0 0 20px #f64f59, 0 0 25px #f7737a, 0 0 30px #f8a081, 0 0 35px #f9cc88" 
            },
            '100%': { 
              textShadow: "0 0 8px #00c6ff, 0 0 16px #0072ff, 0 0 24px #c471ed, 0 0 32px #f64f59, 0 0 40px #f7737a, 0 0 48px #f8a081, 0 0 56px #f9cc88" 
            },
          },
        },
      },
    },
    plugins: [
      require('@tailwindcss/typography'),
    ],
  }