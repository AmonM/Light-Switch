bool luc = false;

void setup() {
  // put your setup code here, to run once:
    pinMode(A0, INPUT);
    pinMode(3, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  int podatk = analogRead(0);

  if(podatk >= 650){ //650 is my limit when to trigger 
     Serial.println(podatk);
     if(luc){
        digitalWrite(3,LOW);
        luc = false;
     }else{
        digitalWrite(3,HIGH);
        luc = true;
     }
    delay(100);	//give it some time to trigger only once per clap
  }
}
