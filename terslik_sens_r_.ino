#define sensor 8
#define led 9
int deger;
void setup() {
pinMode(sensor, INPUT);
pinMode(led, OUTPUT);

}

void loop() {
deger = digitalRead(sensor);

if(deger == HIGH){
  digitalWrite(led, LOW);
}
else{
  digitalWrite(led, HIGH);
}
}
