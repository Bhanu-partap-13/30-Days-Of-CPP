import React, { useRef, useEffect } from 'react';
import { gsap } from 'gsap';
import { Link } from 'react-router-dom';
// 30 Days of C++ - By bhanu partap - learn more about me at https://github.com/Bhanu-partap-13

const DayCard = ({ day, hasContent, index }) => {
  const cardRef = useRef(null);
  const particlesRef = useRef([]);
  const isHoveredRef = useRef(false);

  useEffect(() => {
    const element = cardRef.current;
    if (!element) return;

    const handleMouseEnter = () => {
      isHoveredRef.current = true;
      
      // Create particles
      for (let i = 0; i < 8; i++) {
        setTimeout(() => {
          if (!isHoveredRef.current || !cardRef.current) return;
          
          const particle = document.createElement('div');
          particle.className = 'day-particle';
          particle.style.cssText = `
            position: absolute;
            width: 4px;
            height: 4px;
            border-radius: 50%;
            background: rgba(59, 130, 246, 1);
            box-shadow: 0 0 8px rgba(59, 130, 246, 0.8);
            pointer-events: none;
            left: ${Math.random() * 100}%;
            top: ${Math.random() * 100}%;
            z-index: 10;
          `;
          
          cardRef.current.appendChild(particle);
          particlesRef.current.push(particle);
          
          gsap.fromTo(particle,
            { scale: 0, opacity: 0 },
            { scale: 1, opacity: 1, duration: 0.3, ease: 'back.out(1.7)' }
          );
          
          gsap.to(particle, {
            x: (Math.random() - 0.5) * 80,
            y: (Math.random() - 0.5) * 80,
            rotation: Math.random() * 360,
            duration: 2 + Math.random() * 2,
            ease: 'none',
            repeat: -1,
            yoyo: true
          });
          
          gsap.to(particle, {
            opacity: 0.3,
            duration: 1.5,
            ease: 'power2.inOut',
            repeat: -1,
            yoyo: true
          });
        }, i * 100);
      }

      gsap.to(element, {
        scale: 1.05,
        duration: 0.3,
        ease: 'power2.out'
      });
    };

    const handleMouseLeave = () => {
      isHoveredRef.current = false;
      
      particlesRef.current.forEach(particle => {
        gsap.to(particle, {
          scale: 0,
          opacity: 0,
          duration: 0.3,
          ease: 'back.in(1.7)',
          onComplete: () => {
            particle.remove();
          }
        });
      });
      particlesRef.current = [];

      gsap.to(element, {
        scale: 1,
        duration: 0.3,
        ease: 'power2.out'
      });
    };

    const handleMouseMove = (e) => {
      const rect = element.getBoundingClientRect();
      const x = e.clientX - rect.left;
      const y = e.clientY - rect.top;
      const centerX = rect.width / 2;
      const centerY = rect.height / 2;

      const rotateX = ((y - centerY) / centerY) * -8;
      const rotateY = ((x - centerX) / centerX) * 8;

      gsap.to(element, {
        rotateX,
        rotateY,
        duration: 0.2,
        ease: 'power2.out',
        transformPerspective: 1000,
        transformStyle: 'preserve-3d'
      });

      // Update glow position
      const relativeX = (x / rect.width) * 100;
      const relativeY = (y / rect.height) * 100;
      element.style.setProperty('--glow-x', `${relativeX}%`);
      element.style.setProperty('--glow-y', `${relativeY}%`);
      element.style.setProperty('--glow-intensity', '1');
    };

    const handleClick = (e) => {
      const rect = element.getBoundingClientRect();
      const x = e.clientX - rect.left;
      const y = e.clientY - rect.top;

      const maxDistance = Math.max(
        Math.hypot(x, y),
        Math.hypot(x - rect.width, y),
        Math.hypot(x, y - rect.height),
        Math.hypot(x - rect.width, y - rect.height)
      );

      const ripple = document.createElement('div');
      ripple.style.cssText = `
        position: absolute;
        width: ${maxDistance * 2}px;
        height: ${maxDistance * 2}px;
        border-radius: 50%;
        background: radial-gradient(circle, rgba(59, 130, 246, 0.4) 0%, rgba(139, 92, 246, 0.2) 30%, transparent 70%);
        left: ${x - maxDistance}px;
        top: ${y - maxDistance}px;
        pointer-events: none;
        z-index: 1000;
      `;

      element.appendChild(ripple);

      gsap.fromTo(
        ripple,
        { scale: 0, opacity: 1 },
        {
          scale: 1,
          opacity: 0,
          duration: 0.8,
          ease: 'power2.out',
          onComplete: () => ripple.remove()
        }
      );
    };

    element.addEventListener('mouseenter', handleMouseEnter);
    element.addEventListener('mouseleave', handleMouseLeave);
    element.addEventListener('mousemove', handleMouseMove);
    element.addEventListener('click', handleClick);

    return () => {
      element.removeEventListener('mouseenter', handleMouseEnter);
      element.removeEventListener('mouseleave', handleMouseLeave);
      element.removeEventListener('mousemove', handleMouseMove);
      element.removeEventListener('click', handleClick);
      particlesRef.current.forEach(p => p.remove());
    };
  }, []);

  return (
    <Link
      to={`/day/${day.toString().padStart(2, "0")}`}
      className="block"
    >
      <div
        ref={cardRef}
        className={`day-card ${hasContent ? 'day-card--active' : 'day-card--inactive'}`}
        style={{
          '--glow-x': '50%',
          '--glow-y': '50%',
          '--glow-intensity': '0'
        }}
      >
        <div className="day-card__content">
          <div className={`day-card__number ${hasContent ? '' : 'opacity-50'}`}>
            {day}
          </div>
          <div className={`day-card__label ${hasContent ? '' : 'opacity-50'}`}>
            Day {day}
          </div>
        </div>
        {hasContent && <div className="day-card__glow"></div>}
      </div>
    </Link>
  );
};

const GlobalSpotlight = ({ containerRef }) => {
  const spotlightRef = useRef(null);

  useEffect(() => {
    if (!containerRef?.current) return;

    const spotlight = document.createElement('div');
    spotlight.className = 'curriculum-spotlight';
    spotlight.style.cssText = `
      position: fixed;
      width: 700px;
      height: 700px;
      border-radius: 50%;
      pointer-events: none;
      background: radial-gradient(circle,
        rgba(59, 130, 246, 0.2) 0%,
        rgba(139, 92, 246, 0.12) 20%,
        rgba(59, 130, 246, 0.06) 35%,
        transparent 60%
      );
      z-index: 5;
      opacity: 0;
      transform: translate(-50%, -50%);
      mix-blend-mode: screen;
      transition: opacity 0.3s ease;
    `;
    document.body.appendChild(spotlight);
    spotlightRef.current = spotlight;

    const handleMouseMove = (e) => {
      const container = containerRef.current;
      if (!container || !spotlightRef.current) return;

      const rect = container.getBoundingClientRect();
      const isInside = e.clientX >= rect.left && e.clientX <= rect.right &&
                      e.clientY >= rect.top && e.clientY <= rect.bottom;

      if (isInside) {
        gsap.to(spotlightRef.current, {
          left: e.clientX,
          top: e.clientY,
          opacity: 0.9,
          duration: 0.2,
          ease: 'power2.out'
        });
      } else {
        gsap.to(spotlightRef.current, {
          opacity: 0,
          duration: 0.3,
          ease: 'power2.out'
        });
      }
    };

    document.addEventListener('mousemove', handleMouseMove);

    return () => {
      document.removeEventListener('mousemove', handleMouseMove);
      spotlightRef.current?.remove();
    };
  }, [containerRef]);

  return null;
};

export { DayCard, GlobalSpotlight };
export default DayCard;

