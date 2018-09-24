int x = A0;
int y = A1;
int sw = 2;
void setup() {
  Serial.begin(9600);
  pinMode(x,INPUT);
   pinMode(y,INPUT);
    pinMode(sw,INPUT);
}

void loop() {
  int px = analogRead(x);
  Serial.println(px);
  Serial.println("______");
  Serial.println("px");
  delay(500);
  int py = analogRead(y);
Serial.println(py);
Serial.println("______");
Serial.println("py");
 delay(500);
}
