void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(0)) {
    Serial.println("HELLO WORLD!");
  } else {
    Serial.println("It's 2023");
  }
}
