# **Project 1: Traffic Light with Pedestrian Request🚦**

Create a car-only traffic light system using Arduino.  
The traffic lights must follow this **continuous 4-phase cycle**, each with proper timing:

1. **Green**
2. **Yellow**
3. **Red** _(Pedestrians may cross during this phase)_
4. **Red + Yellow**
5. Back to **Green**  

This cycle must repeat indefinitely.

---
## **Pedestrian Button Rules**

**A push button is used to request a pedestrian crossing with the following rules:**

**1. Ignore Presses During Red phase**  
- If the button is pressed **while the system is in the Red phase**, the press must be ignored.

**2. Defer Presses During Green or Yellow**  
- If the button is pressed during Green or Yellow, do not interrupt the current phase.  
- The system should wait until Red is reached.  
- When the next Red phase begins, keep Red active for an **extra crossing duration**, then continue the cycle normally.

**3. Normal Cycle Afterwards**  
- After the extended Red, resume the sequence:  
- **Red + Yellow → Green → Yellow → Red → ...**

Any button presses during Red or the extended Red must still be ignored.

---
