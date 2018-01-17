int x = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(950);
x = x + 1;
digitalWrite(13, HIGH);
delay(50);
digitalWrite(13, LOW);
Serial.print(x);
Serial.println(" sec have elapsed.");
Serial.println(millis());
 }
