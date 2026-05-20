// Arduino gaming controller example
// This editor does not work and a copy of this code is in the Arduino Cloud edit and upload that version a copy is here are well.

const int buttonPin    = 2;
const int joystickXPin = A0;
const int joystickYPin = A1;
const int statusLedPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(statusLedPin, OUTPUT);
}

void loop() {
  bool buttonPressed = digitalRead(buttonPin) == LOW;
  int joystickX = analogRead(joystickXPin);
  int joystickY = analogRead(joystickYPin);

  digitalWrite(statusLedPin, buttonPressed ? HIGH : LOW);

  Serial.print("Button: ");
  Serial.print(buttonPressed ? "Pressed" : "Released");
  Serial.print(" | Joystick X: ");
  Serial.print(joystickX);
  Serial.print(" | Joystick Y: ");
  Serial.println(joystickY);

  delay(100);
}