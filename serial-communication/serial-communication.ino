byte a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    a=Serial.read();
    //a=a-48;
    Serial.print(a);
    if(a==1){
      Serial.println("YESSS...YESSS...");
      digitalWrite(13, HIGH);
      delay(1000);
    }else{
      Serial.println("NOOOOOO");
      digitalWrite(13, LOW);
    }
  }
}
