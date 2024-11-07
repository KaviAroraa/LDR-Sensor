void setup() {
  // put your setup code here, to run once:
  pinMode(5, INPUT);
  pinMode(18, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int f = analogRead(5);
  Serial.println(f);
  int g = map(f, 0, 4095, 0, 3.3);
  if (g < 2){
    digitalWrite(18, HIGH);
  }
  if (g >= 2){
    digitalWrite(18, LOW);
  }
}
