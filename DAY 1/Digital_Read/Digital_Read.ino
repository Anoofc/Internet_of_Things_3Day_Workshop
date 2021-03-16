#define pin D2
int pinStatus;

void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  

}

void loop() {
  pinStatus = digitalRead(pin);
  if (pinStatus == HIGH) {
    Serial.println("Button Pressed");
    //Serial.println("Motion Detected");
  }

}
