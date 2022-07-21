const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 13;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, LOW);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  if(distance >= 200 || distance <= 0){
    Serial.print("Out of Range");
     
    }else{
    Serial.print("DISTANCE: ");
    Serial.println(distance);
    digitalWrite(ledPin, HIGH);
    delay(100);  
  }
}
