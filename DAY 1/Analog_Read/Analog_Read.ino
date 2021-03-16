#define pin A0
int pinStatus;

void setup() {
  Serial.begin(9600);
//  pinMode(pin, INPUT);
}

void loop() {
  pinStatus = analogRead(pin);
  Serial.print("Value : ");
  Serial.println(pinStatus);
  delay(1000);
}
