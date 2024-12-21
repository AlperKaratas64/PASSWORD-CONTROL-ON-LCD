# PASSWORD-CONTROL-ON-LCD

This project implements a password control system using a PIC16F877 microcontroller. The system verifies passwords entered through a keypad and displays the results on an LCD screen. It incorporates a variety of components to ensure accurate operation and efficient performance.

## 📋 Equipment Used

- **PIC16F877**: Microcontroller.
- **4x3 KEYPAD-PHONE**: Input device for entering passwords.
- **16x2 LCD LM016L**: Display device for output.
- **TRANSISTOR 2N2222A**: For switching and amplification.
- **5V RELAY RLY-SPCO**: Used for controlling connected devices.
- **RESISTOR**: For current regulation.
- **POTENTIOMETER**: For adjustable resistance.
- **POWER-GROUND**: Power management and grounding.

## ⚙️ PIC16F877 Features

- 40 pins with 33 I/O (input/output) pins.
- Five ports: A (6-bit), B/C/D (8-bit each), and E (3-bit).
- Indirect and relative addressing modes.
- 8K words of Flash ROM program memory (EEPROM-enabled).
- 368 bytes of user RAM memory and 256 bytes of EEPROM memory.
- Low-voltage programming support.
- Wide operating voltage range: 2.0V to 5.0V.

## 🛠️ Key Components and Their Functions

### **KEYPAD-PHONE**
- Used for entering passwords.
- Operates via wireless radio frequencies.
- Responds to predefined questions/events in real-time.
- Displays responses in a graphical format.

### **LCD LM016L**
- Liquid Crystal Display technology.
- Displays polarized light visible to the user.

### **TRANSISTOR 2N2222A**
- Amplifies or switches electrical signals.
- Commonly used in educational and hobby electronics.
- Handles high-current loads (up to 800mA).

### **RELAY RLY-SPCO**
- Switches high-current devices with low currents.
- Energized coil moves an armature to enable circuit conduction.

### **RESISTOR & POTENTIOMETER**
- **Resistor:** Limits/regulates current in the circuit.
- **Potentiometer:** Acts as a variable voltage divider.

### **POWER AND GROUND**
- Provides necessary DC voltages for components.
- Ensures a complete circuit and safe return path.

## 🚀 Working Principle

1. **Password Entry**: Users enter passwords through the keypad. These passwords are stored in the EEPROM.
2. **Verification**: When passwords of three or more characters are entered, they are verified by the system.
3. **Display**: Verified passwords are displayed on the LCD screen, indicating whether they are correct or incorrect.
4. **Key Functions**:
   - **`*` Key**: Starts the system and allows password entry.
   - **`#` Key**: Ends the session and turns off the relay.
   - **Other Keys**: Enter characters for password matching.

## 🔧 Applications

- Secure access control systems.
- Educational demonstration for microcontroller-based projects.
- Hobby electronics for password-based locks.

## 📝 Future Enhancements

1. **Enhanced Security**: Add encryption for password storage.
2. **Multi-User Support**: Enable different passwords for multiple users.
3. **Wireless Control**: Integrate with Bluetooth or Wi-Fi for remote operation.

---
**Prepared By:** Ayşegül  
For detailed project information, refer to the [GitHub Repository](#).
