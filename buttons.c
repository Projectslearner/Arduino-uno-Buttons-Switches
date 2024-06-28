/*
    Project name : Arduino Uno Buttons and Switches
    Modified Date: 27-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-buttons-switches
*/

const int buttonPin = 2; // Pin connected to the button

int buttonState = 0;     // Variable to store the button state

void setup() {
  // Initialize the button pin as input with internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);

  // Start serial communication for debugging purposes
  Serial.begin(9600);
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed
  if (buttonState == LOW) {
    // Button is pressed
    Serial.println("Button pressed");
  } else {
    // Button is not pressed
    Serial.println("Button not pressed");
  }

  // Small delay to debounce the button
  delay(50);
}
