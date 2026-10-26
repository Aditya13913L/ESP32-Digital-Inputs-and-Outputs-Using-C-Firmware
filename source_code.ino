const int button1Pin = 14; // Button 1
const int button2Pin = 27; // Button 2
const int led1Pin = 25;    // Green LED
const int led2Pin = 26;    // Red LED
const int buzzerPin = 33;  // Buzzer

void setup() {
  Serial.begin(115200); 
  
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);

  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);
  digitalWrite(buzzerPin, LOW);

  Serial.println("ESP32 System Ready!");
}

void loop() {
  int btn1State = digitalRead(button1Pin);
  int btn2State = digitalRead(button2Pin);

  if (btn1State == LOW) {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Button 1 Pressed");
    delay(250);
  }
  
  else {
    digitalWrite(led1Pin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  if (btn2State == LOW) {
    digitalWrite(led2Pin, HIGH);
    Serial.println("Button 2 Pressed");
    delay(250);
  } 
  
  else {
    digitalWrite(led2Pin, LOW);
  }
}