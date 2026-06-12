# SOS Vehicle Safety System (Simulation in C)

## Overview

This project is a simple simulation of a Vehicle Safety System written in C. It demonstrates the basic workflow of:

* Ignition OFF detection
* Ignition ON operation
* Motor start simulation
* SOS/Panic button functionality

The project is intended for learning Embedded Systems concepts and state-based application development.

---

## Features

### 1. Ignition OFF

* Displays a message asking the user to turn ON the vehicle ignition.

### 2. Ignition ON

* Allows the user to start the motor.

### 3. Motor Control

* User can press `4` to start the motor.
* Simulates vehicle riding by displaying:

  ```
  Riding....
  ```

### 4. SOS / Panic Button

* User can press `2` to trigger an emergency SOS.
* Simulates SOS transmission with a countdown.
* Displays:

  ```
  SOS Detecting...
  SOS is Sending....
  SOS Detected....
  ```

---

## Program Flow

```text
                Start
                   |
                   v
        Select Operation
        0 / 1 / 2
           |
   -----------------
   |       |       |
   v       v       v
IGN OFF  IGN ON   SOS
   |       |       |
   |    Start Motor|
   |       |       |
   --------|--------
           |
           v
          End
```

---

## Technologies Used

* C Programming
* GCC Compiler
* Linux System Calls
* sleep() function from `<unistd.h>`

---

## Compilation

Compile the program using GCC:

```bash
gcc sos_project.c -o sos_project
```

---

## Execution

Run the executable:

```bash
./sos_project
```

---

## Sample Output

### Ignition OFF

```text
Enter The Choice that you Want To Perform
Press "0" For IGN OFF
Press "1" For IGN ON
Press "2" For Send Panic

0

Please Turned ON the Ignition of Vehicle
```

### Ignition ON

```text
1
Press "4" To TURNED ON MOTOR
4

Motor Get ON Enjoy This Ride
Riding....
Riding....
Riding....
```

### SOS Mode

```text
2

SOS Detecting...

10 SOS is Sending....
9 SOS is Sending....
8 SOS is Sending....
...
1 SOS is Sending....

SOS Detected....
```

---

## Future Enhancements

* GPS Location Tracking
* GSM-based SOS Alert Messaging
* Real-time Vehicle Monitoring
* Driver Authentication
* Emergency Contact Notification
* Vehicle Speed Monitoring
* State Machine Implementation
* EEPROM Data Logging

---

## Author

**Saurabh Kumar**

Embedded Systems Engineer | C Programmer | Electronics & Communication Engineer
