
int ledPin = 7;
int ldrPin = A1;


void setup() {
 pinMode (ledPin, OUTPUT);
 Serial.begin(9600);  
    
}

void loop() {
 int ldrValor = analogRead(ldrPin);
  if(ldrValor<=980){
  digitalWrite(ledPin,LOW);
  }
  else {
    digitalWrite(ledPin,HIGH);
  }

  Serial.println(ldrValor);
  delay(1000);
}
