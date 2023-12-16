# AVR_Atmega32_Drivers

This repository hosts a collection of drivers specifically designed for the AVR_ATmega32 microcontroller family. The drivers provided here a set of both MCAL (Microcontroller Abstraction Layer) and HAL (Hardware Abstraction Layer) to facilitate software development for this particular microcontroller.


## Contents
### MCAL Drivers
**ADC Driver:** Enables easy integration and usage of the Analog-to-Digital Converter (ADC) module on the AVR_ATmega32 microcontroller.<br />
**Timer Driver:** Offers functionalities to configure and manage timers and their associated interrupt routines.<br />
**Interrupt Driver:** Simplifies interrupt handling and configuration, allowing efficient usage of interrupt-driven functionalities.<br />
**DIO (Digital I/O) Driver:** Provides an abstraction layer for controlling and managing digital input/output pins with ease.<br />


### HAL Drivers
**LCD Driver:** Interfacing with Liquid Crystal Displays (LCDs), allowing simplified integration for displaying information.<br />
**UART Driver:** Facilitates serial communication via the Universal Asynchronous Receiver-Transmitter (UART) module.<br />
**7_Segment Driver:** Offers functionalities to control 7-segment displays, allowing easy display of numerical information.<br />
**I2C Driver:** Facilitates communication using the Inter-Integrated Circuit (I2C) protocol, enabling interaction with I2C-compatible devices.<br />

## Usage
These drivers are crafted to enabling faster prototyping for the AVR_ATmega32 microcontroller. Each driver includes comprehensive documentation within its directory to guide on integration and usage.I've tested various applications using these drivers. Please note that the drivers may be modified based on specific application.

## Contributing
Contributions are welcome! If you have improvements, additional drivers, or fixes to share, feel free to fork this repository, make your changes, and submit a pull request.

## Applications:
- [User_Login_System](https://github.com/IbrahimNaglah/User_login_system.git) -> Drivers: LCD, Keypad,& DIO
- [Simple Calculator](https://github.com/IbrahimNaglah/Simple_Calculator_LCD-Keypad.git) -> Drivers: LCD, Keypad,& DIO
- [Keypad with SSEG](https://github.com/IbrahimNaglah/SSEG-KEYPAD.git) -> Drivers: SSEG, keypad, & DIO
