int incomingByte;  
void setup() {
  Serial.begin(9600);  
  pinMode(3, OUTPUT); 
  digitalWrite(3, LOW);
  pinMode(4, OUTPUT); 
  digitalWrite(4, LOW);// Initially turn off the LED
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
      Serial.println("LED  1 ON");
    }
    // Check if received character is 'b' to turn off LED
    else if ((char)incomingByte == 'b') {
      digitalWrite(3, LOW);   // Turn LED off
      Serial.println("LED 1 OFF");
      
    }
    else if ((char)incomingByte == 'c') {
      digitalWrite(4, HIGH);   // Turn LED off
      Serial.println("LED 2 ON");
          }
    else if ((char)incomingByte == 'd') {
      digitalWrite(4, LOW);   // Turn LED off
      Serial.println("LED 2 OFF");
    }
  }
}