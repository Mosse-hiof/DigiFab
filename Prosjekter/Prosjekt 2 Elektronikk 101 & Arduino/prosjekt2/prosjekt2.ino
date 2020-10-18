int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  if (switchState == LOW){
   // button not pressed 
   digitalWrite(3, HIGH); //red led on
   digitalWrite(4, LOW); // blue led off
   digitalWrite(5, LOW); // blue led off
   
   //LOW = off, HIGH == on
  }

  else {
    // button pressed
    digitalWrite(3, LOW); //red led off
    digitalWrite(4, LOW); //blue led off
    digitalWrite(5, HIGH); //blue led on

    delay(150); //delay half second before led toggle

    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    delay(150); //delay half second before led toggle again
  }
} 
//back to loop start
