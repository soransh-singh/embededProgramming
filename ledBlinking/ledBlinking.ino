int arr[3];
void setup() {
  // put your setup code here, to run once:
  
  arr[0]= 10;
  arr[1]= 12;
  arr[2]= 13;
  for(int i=0; i<3; i++){
    pinMode(arr[i], OUTPUT);
  }
  //  pinMode(12, INPUT);

  // blink only 5 times
  //    for(int i=0; i<5; i++){
  //      digitalWrite( 13, HIGH);
  //      delay(1000);
  //      digitalWrite( 13, LOW);
  //      delay(1000);
  //    }
}

void loop() {
  for(int i=0; i<3; i++){
    if(random(2)== 0){
      digitalWrite( arr[i], HIGH);  
    }
  }
  
  delay(1000);
  for(int i=0; i<3; i++){
    if(random(2)== 0){
      digitalWrite( arr[i], LOW);  
    }
    delay(1000);
  }
//  digitalWrite( 10, HIGH);digitalWrite( 12, LOW);digitalWrite( 13, LOW);
//  delay(1000);
//  digitalWrite( 10, LOW);digitalWrite( 12, HIGH);digitalWrite( 13, LOW);
//  delay(1000);
//  digitalWrite( 10, LOW);digitalWrite( 12, LOW);digitalWrite( 13, HIGH);
//  delay(1000);
//  digitalWrite( 10, LOW);digitalWrite( 12, HIGH);digitalWrite( 13, HIGH);
//  delay(1000);
//  digitalWrite( 10, HIGH);digitalWrite( 12, LOW);digitalWrite( 13, HIGH);
//  delay(1000);
}


  // Led blinking:
    
  //  digitalWrite( 13, HIGH);
  //  delay(1000);
  //  digitalWrite( 13, LOW);
  //  delay(1000);

  // using Switch to turn on and off the led
  //  bool val = digitalRead( 12 );
  //  if (val == HIGH){
  //    digitalWrite( 13, HIGH);
  //  }else{
  //    digitalWrite( 13, LOW);
  //  }
