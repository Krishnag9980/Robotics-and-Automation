//Program to Turn ON and OFF  Relay for 2 Seconds 

//Initialization 
int Relay = 5;

void setup() {
  //Declaration LED, Buzzer and Relay as Output
  pinMode(Relay, OUTPUT);

  }

void loop() {
  //Turn ON LED, Buzzer and  Relay for 2 Seconds
  digitalWrite(Relay, HIGH);
  delay(2000);

  //Turn OFF LED, Buzzer and Relay for 2 Seconds
  digitalWrite(Relay, LOW);
  delay(2000);

}
