import React, { useEffect, useMemo, useState, useCallback } from "react";
import Particles, { initParticlesEngine } from "@tsparticles/react";
import { loadLinksPreset } from "@tsparticles/preset-links";
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
const ParticleBackground = () => {
  const [init, setInit] = useState(false);

  useEffect(() => {
    initParticlesEngine(async (engine) => {
      await loadLinksPreset(engine);
    }).then(() => {
      setInit(true);
    });
  }, []);
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13
  const options = useMemo(
    () => ({
      preset: "links",
      background: {
        color: { value: "#121212" },
      },
      particles: {
        color: {
          value: ["#61dafb", "#ff69b4", "#39ff14"],
        },
        links: {
          color: "#ffffff",
          distance: 150,
          enable: true,
          opacity: 0.2,
          width: 1,
        },
        move: {
          enable: true,
          speed: 1.5,
        },
        opacity: {
          value: 0.5,
        },
        number: {
          density: {
            enable: true,
            value_area: 800,
          },
          value: 50,
        },
        size: {
          value: { min: 1, max: 3 },
        },
      },
      detectRetina: true,
    }),
    [],
  );

  if (init) {
    return (
        <Particles
          id="tsparticles"
          options={options}
          style={{
            position: "fixed",
            top: 0,
            left: 0,
            width: "100%",
            height: "100%",
            zIndex: -1,
          }}
        />
    );
  }

  return <></>; // Or a fallback/loader if init takes time
};

export default ParticleBackground; 
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13