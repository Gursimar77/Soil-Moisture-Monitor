#define SENSOR_PIN A0  // Yahaan soil moisture sensor ko A0 pin pe connect kiya hai
#define LED_PIN 8      // LED ko pin 8 pe lagaya hai (jyada sukha hua toh ye jalega)
#define BUZZER_PIN 9   // Buzzer pin 9 pe hai, paani kam hone par bajega

void setup() {
  pinMode(LED_PIN, OUTPUT);   // LED ko output mode pe set kar rahe hain
  pinMode(BUZZER_PIN, OUTPUT); // Buzzer ko bhi output mode pe set kar rahe hain
  Serial.begin(9600);  // Serial monitor shuru kar rahe hain taaki values dekh sakein
}

void loop() {
  int moisture = analogRead(SENSOR_PIN); // Sensor se data read krn ke liye
  Serial.print("Soil Moisture Level: ");
  Serial.println(moisture); // Jo value mili wo serial monitor pe print karne ke liye

  if (moisture < 400) {  // Agar mitti bohot sukhi hai (threshold 400 se kam)
    digitalWrite(LED_PIN, HIGH);  // LED on 
    digitalWrite(BUZZER_PIN, HIGH);  // Buzzer bajao taaki pata chale akal pda h
  } else {
    digitalWrite(LED_PIN, LOW);  // LED band
    digitalWrite(BUZZER_PIN, LOW); // Buzzer band
  }

  delay(1000);  // 1 second rukenge, fir dobara check karenge
}
