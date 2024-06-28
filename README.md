# Arduino Uno Buttons and Switches

#### Project Overview

This project demonstrates how to use a button with an Arduino Uno to detect button presses. The project reads the state of the button and prints the status to the serial monitor, indicating whether the button is pressed or not.

#### Components Needed

- **Arduino Uno**
- **Push Button**
- **10kΩ Resistor (optional if not using internal pull-up)**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect the Push Button to Arduino Uno:**
   - **One leg of the button:** Connect to digital pin 2 on the Arduino Uno.
   - **Other leg of the button:** Connect to GND on the Arduino Uno.
   - **Optional:** If not using the internal pull-up resistor, connect a 10kΩ resistor between the button leg connected to pin 2 and 5V on the Arduino Uno.

#### Instructions

1. **Circuit Setup:**
   - Connect the push button to the Arduino Uno as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600.
   - Press and release the button. Observe the serial monitor output displaying "Button pressed" when the button is pressed and "Button not pressed" when the button is released.

#### Applications

- **User Input:** Use for detecting user inputs in various projects.
- **Control Systems:** Implement in projects where button press controls are required.
- **Prototyping:** Useful for testing button-based inputs during prototyping.

#### Notes

- Ensure the button is correctly connected to the Arduino Uno and powered.
- The internal pull-up resistor is used to simplify the circuit by eliminating the need for an external pull-up resistor.
- Adjust the debounce delay (`delay(50)`) if necessary to improve button press detection.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-buttons-switches)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner