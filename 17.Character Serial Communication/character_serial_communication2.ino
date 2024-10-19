int incomingByte;  
void setup() {
  Serial.begin(9600);  
  pinMode(3, OUTPUT); 
  digitalWrite(3, LOW); // Initially turn off the LED
}

void loop() {
  // Send data only when you receive data:
  if (Serial.available() > 0) {
    incomingByte = Serial.read();  // Read one character from serial input
    
    Serial.print("Received: ");    // Print received character
    Serial.println((char)incomingByte);  // Cast the integer to a char and print it

    // Check if received character is 'a' to turn on LED
    if ((char)incomingByte == 'a') {
      digitalWrite(3, HIGH);  // Turn LED on
      Serial.println("LED ON");
    }
    // Check if received character is 'b' to turn off LED
    else if ((char)incomingByte == 'b') {
      digitalWrite(3, LOW);   // Turn LED off
      Serial.println("LED OFF");
    }
  }
}