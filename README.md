# PASSWORD-CONTROL-ON-LCD
EQUIPMENT USED IN THE CIRCUIT:
PIC16F877
4x3 KEYPAD-PHONE
16x2 LCD LM016L
TRANSISTOR 2N2222A
5V RELAY RLY-SPCO
RESISTOR
POTENTIOMETER
POWER-GROUND
PIC16F877:
Out of the 40 pins of the PIC16F877, 33 are I/O (input/output) pins. The PIC16F877 features five ports: a 6-bit A port, three 8-bit ports (B, C, and D), and a 3-bit E port.

Features of PIC16F877:
It supports indirect and relative addressing modes.
With CMOS Flash EEPROM technology, it achieves high speed with low power consumption.
It includes 8K words of Flash ROM program memory (EEPROM-enabled), 368 bytes of user RAM memory, and 256 bytes of EEPROM memory, comprising three memory blocks.
It supports low-voltage programming.
It is in-circuit serial programmable with just a 5V input.
It can be programmed using 2 pins.
Program memory can be accessed for read/write operations.
It operates within a wide voltage range of 2.0V to 5.0V.
KEYPAD-PHONE:
The keypad is a system for data collection and analysis. It accelerates processes such as receiving responses, providing feedback, and confirming within group activities.

How the Keypad System Works:
Operates via radio frequencies and is wireless.
Predefined questions are input into the system.
During events, these questions are asked to participants at the appropriate time.
Participants respond to the questions by pressing keys.
Responses are displayed on the screen in a graphical format within three seconds.
LCD LM016L:
LCD (Liquid Crystal Display) is a display technology based on the principle of electrically polarized liquid allowing light to pass in a single phase, making it visible when combined with a polarization filter.

TRANSISTOR 2N2222A:
A transistor is a semiconductor device used to amplify or switch small electrical signals. It has three or more terminals, and applying a signal to one terminal controls the current flow between the other two.
PN2222 is a low-power silicon transistor designed for switching and linear amplification applications. The 2N2222A is commonly used in household appliances, educational projects, and hobby electronics.

Applications of 2N2222A:
Switching loads with high current (up to 800mA).
Various switching applications.
Motor speed control.
Inverter and rectifier circuits.
Darlington Pair.
RELAY RLY-SPCO:
A relay is a circuit element used to switch high-current devices with low currents.

Operating Principle:
When the relay coil is energized, the coil magnetizes and moves an armature, causing the contacts to touch each other and enable conduction in the circuit.

RESISTOR:
A resistor is a passive electronic component used in circuits to limit or regulate electric current, adjust signal levels, divide voltage, and other applications.

POTENTIOMETER:
A potentiometer is a three-terminal resistive device that acts as a voltage divider, providing a continuously variable output voltage signal proportional to the physical position along its shaft. Its primary feature is adjustable resistance.

POWER:
Power supplies provide the necessary DC voltages required for the operation of various electronic components.

GROUND:
In electrical and electronic circuits, ground provides a common return path to the power source and completes the circuit. It is used in both AC systems (phase, neutral, and ground) and DC systems (positive, negative, and ground).

WORKING PRINCIPLE OF THE PROJECT:
The KEYPAD-PHONE is used to verify the passwords we define. Entered passwords are stored in the EEPROM. When passwords of three or more characters are entered via the keypad, they are verified. Passwords are displayed on the LCD, where their correctness is checked. The KEYPAD characters are defined as A, B, C, D, and 1, 2, 3.

Functionality of Keys:
“*” Key: This key starts the system. When the system is ON, the controller scans only for this key. Pressing this key allows you to enter the password for the lock system.
“#” Key: Once you are done using the lock system, you press this key to turn off the system and the relay.
Remaining Keys: These are used to input character values to the microcontroller, which then analyzes these characters. Based on predefined passwords in the controller, it matches the input and determines whether the password entered is correct or incorrect.
