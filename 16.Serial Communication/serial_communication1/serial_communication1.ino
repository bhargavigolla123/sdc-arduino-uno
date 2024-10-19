// C++ code
//
int incomingByte;  // Declare variable to store incoming data
void setup()
{
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps

}

void loop()
{
  // send data only when you receive data:
  if (Serial.available() > 0) {
    String receivedString = Serial.readStringUntil('\n');  // Read the character
    Serial.print("Received: "); // Print received character
    Serial.println(receivedString);//
  }
}