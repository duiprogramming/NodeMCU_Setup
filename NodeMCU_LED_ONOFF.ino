void setup() {
  pinMode(13, OUTPUT);  //Pin 13 initialized as output
}

void loop() {
  digitalWrite(13, HIGH); //LED turn on setting valtage as HIGH
  delay(1500);             //Wait half second
  digitalWrite(13, LOW);  //LED turn off setting voltage as LOW
  delay(500);             //Wait half second
  
}
