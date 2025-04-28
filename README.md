# Servo-Movement-Buttons
This project uses an ESP32 microcontroller to control a servo motor via two pushbuttons.

Button 1: Rotates the servo 5 degrees counterclockwise (decrease angle) each time it's pressed.

Button 2: Rotates the servo 5 degrees clockwise (increase angle) each time it's pressed.

The servo movement is bounded between 0° and 180° to prevent mechanical damage.

The system uses the ESP32’s internal INPUT_PULLUP resistors to handle button states, minimizing the need for external components.

Serial monitoring at 112500 baud allows real-time feedback to confirm button presses and movements.

Basic debouncing is implemented with a 200 ms delay after each button press to prevent multiple rapid triggers.
