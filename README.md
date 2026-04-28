# PW3_MouseRace

Repository for Project Week 3 - Mouse Race.

## Project Overview

This repository contains code and supporting files for the Project Week 3 autonomous mouse.
The mouse was designed to detect a 20 kHz guided track using inductive sensing and to steer
using Arduino-based differential motor control.

## Branch: Improved Arduino Motor and Sensor Control Code

This branch documents a change made to improve the Arduino motor and sensor control code.

### Purpose of the Change

The purpose of this change was to establish and improve the hardware interface between:
- the two sensor inputs
- the Arduino
- and the PWM motor-control outputs

This was needed so that later software development and testing could be carried out more effectively.

### Files Affected
- `ArduinoCode.ino`
- `README.md`

### Summary of Changes
- initialised the sensor input pins
- defined the motor output pins
- structured the Arduino code for later control development
- documented the purpose of the update in the repository

### Why Version Control Was Used

The code was updated on a separate branch so that the modification could be isolated from
the main branch, documented clearly, and then reviewed before merging.

## Contributors
dk2033
Project Week 3 - Solo submission