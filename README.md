# 5 Servo Motors Control Project

## 📋 Project Overview
This project demonstrates controlling 5 micro servo motors simultaneously using Arduino Uno. The servos perform a sweep motion for approximately 2 seconds, then hold at 90 degrees.

## 🎯 Task Requirements
Program 5 servo motors to perform the following actions:
1. Run using the Sweep example for 2 seconds
2. After that, make all the motors hold at 90 degrees

## ✅ Implementation Confirmation
**Task Completed Successfully!** ✓

The implementation matches the requirements:
- ✅ All 5 servos start from initial position (0 degrees)
- ✅ Servos perform sweep motion from 0° → 180° → 0° (approximately 2 seconds with `delay(5)`)
- ✅ After sweep completes, all servos move to and hold at 90 degrees
- ✅ Motion executes only once (in `setup()` function)

## 🔧 Hardware Components
- **1x Arduino Uno**
- **5x Micro Servo Motors** (Blue, 3-wire: Brown/Red/Orange)
- **1x Breadboard**
- **Jumper Wires**
- **Power Bank** (for Arduino power supply)

## 🔌 Wiring Connections

### Power Rails (Breadboard)
- Arduino **GND** → Breadboard negative rail (blue line)
- Arduino **5V** → Breadboard positive rail (red line)

### Servo Connections (All 5 servos)
Each servo has 3 wires:
- **Brown wire** → Breadboard negative rail (GND)
- **Red wire** → Breadboard positive rail (5V)
- **Orange wire** → Arduino digital pin (signal)

### Pin Assignments
| Servo | Signal Pin |
|-------|------------|
| Servo 1 | Pin 9 |
| Servo 2 | Pin 10 |
| Servo 3 | Pin 11 |
| Servo 4 | Pin 6 |
| Servo 5 | Pin 3 |

## 💻 Code Explanation

### Key Features
1. **Initialization (Setup)**
   - All servos attached to their respective pins
   - Initial position set to 0 degrees
   - 500ms delay ensures all servos are ready

2. **Sweep Motion**
   - Forward sweep: 0° → 180° (using `for` loop with 5ms delay per degree ≈ 1 second)
   - Backward sweep: 180° → 0° (using `for` loop with 5ms delay per degree ≈ 1 second)
   - Total sweep time: approximately 2 seconds

3. **Final Position**
   - All servos move to and hold at 90 degrees
   - No code in `loop()` ensures single execution

### Why `setup()` instead of `loop()`?
The task requires the action to happen only once, not continuously. By placing all motion code in `setup()`, the program:
- Executes once when Arduino powers on
- Completes the task and stops
- Keeps servos at final position (90°) indefinitely

## 🐛 Challenges & Solutions

### Challenge 1: Connecting Multiple Servos
**Problem:** Initial confusion about how to connect 5 servos to one Arduino
- Unclear how to share power between all servos
- Worried about power supply capability

**Solution:**
- Used breadboard power rails to distribute GND and 5V to all servos
- Connected only signal wires individually to different Arduino pins
- Power bank provided sufficient current for 5 micro servos

### Challenge 2: Implementing the 2-Second Timing
**Problem:** Understanding how to limit sweep motion to exactly 2 seconds
- Initial attempts used `millis()` timing which was complex
- Confusion between continuous looping and timed execution

**Solution:**
- Used simple `delay()` approach with calculated timing
- Each degree movement with 5ms delay = approximately 2 seconds total
- Placed code in `setup()` for single execution instead of complex timing logic

### Challenge 3: One Slow Servo
**Problem:** During testing, one servo moved slower than others
- Suspected wiring issues or defective servo
- Needed to verify all servos were functioning correctly

**Solution:**
- Created a test program to run all servos for 60 seconds
- Verified connections were secure
- Confirmed all servos returned to same position (0°)
- Test helped identify that all servos were working properly

### Challenge 4: Understanding Initial Position
**Problem:** Needed clarity on starting position and final position
- Should servos start from random position or specific angle?
- What happens after the 2-second sweep?

**Solution:**
- Added explicit initialization: all servos set to 0° at startup
- Clear sequence: 0° → sweep motion → return to 0° → move to 90° → hold
- This ensures predictable, repeatable behavior

## 📊 Expected Behavior

1. **Power On:** All servos move to 0 degrees (initial position)
2. **Wait:** 500ms pause
3. **Sweep Forward:** Smooth motion from 0° to 180° (~1 second)
4. **Sweep Backward:** Smooth motion from 180° to 0° (~1 second)
5. **Final Position:** All servos move to 90° and hold indefinitely

## 🎓 Learning Outcomes

As a beginner in electronics, this project taught me:
- How to control multiple servos simultaneously
- Using breadboard power rails for shared connections
- Difference between `setup()` and `loop()` functions
- Basic servo motor control using Arduino Servo library
- Troubleshooting hardware connections
- Importance of testing components individually

## 📝 Notes

- Total execution time: approximately 2 seconds (matching task requirements)
- Micro servos operate at 5V with low current draw
- Using `delay(5)` per degree provides smooth, visible motion
- Code is beginner-friendly with Arabic comments for clarity

## 🔮 Future Improvements

- Add individual servo control for complex choreography
- Implement button control to restart motion
- Add LED indicators for each motion phase
- Create more complex movement patterns

---

**Project Status:** ✅ Complete and Working  
**Task Requirements:** ✅ Fully Implemented  
**Date:** November 2025
