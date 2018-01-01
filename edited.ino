


int trigPin1 = 4;
int echoPin1 = 3;

int trigPin2 = 5;
int echoPin2 = 6;


int trigPin3 = 8;
int echoPin3 = 9;

int trigPin4 = 12;
int echoPin4 = 11;

int const buzzPin = 7; // Connect buzzer pin to 7


void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);


  
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);

  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);

  pinMode(buzzPin, OUTPUT);
 
}

void firstsensor(){ // This function is for first sensor.
  int duration1, distance1;
  digitalWrite (trigPin1, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin1, LOW);
  duration1 = pulseIn (echoPin1, HIGH);
  distance1 = (duration1/2) / 29.1;

     Serial.print("for the front sensor "); 
      Serial.print(distance1);  
      Serial.print("cm    ");
 // if distance less than 0.5 meter and more than 0 (0 or less means over range) 
    if (distance1 <= 70 ) {
      // Buzz
      Serial.println("i am in on mode");
      //digitalWrite(buzzPin, HIGH);
      //tone(buzzPin,100);
      delay(1000);
     // digitalWrite(buzzPin, LOW);
      //delay(1000);
     
    } else {
      // Don't buzz
      Serial.println("i m in off mode");
      //digitalWrite(buzzPin, HIGH);
      //noTone(buzzPin);
      delay(1000);
      
    }

      
}
void secondsensor(){ // This function is for second sensor.
    int duration2, distance2;
    digitalWrite (trigPin2, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin2, LOW);
    duration2 = pulseIn (echoPin2, HIGH);
    distance2 = (duration2/2) / 29.1;

      Serial.print("For left sensor: ");
      Serial.print(distance2);  
      Serial.print("cm    ");
 // if distance less than 0.5 meter and more than 0 (0 or less means over range) 
    if (distance2 <= 70 ) {
      // Buzz
      Serial.println("i am in on mode");
      digitalWrite(buzzPin, HIGH);
      tone(buzzPin,500);
      delay(1000);
     // digitalWrite(buzzPin, LOW);
      //delay(1000);
     
    } else {
      // Don't buzz
      Serial.println("i m in off mode");
      digitalWrite(buzzPin, HIGH);
      noTone(buzzPin);
      delay(1000);
      
    }
}

void thirdsensor(){ // This function is for second sensor.
    int duration3, distance3;
    digitalWrite (trigPin3, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin3, LOW);
    duration3 = pulseIn (echoPin3, HIGH);
    distance3 = (duration3/2) / 29.1;

      Serial.print("For back sensor ");  
      Serial.print(distance3);  
      Serial.print("cm    ");
      Serial.print("cm    ");
 // if distance less than 0.5 meter and more than 0 (0 or less means over range) 
    if (distance3 <= 70 ) {
      // Buzz
      Serial.println("i am in on mode");
      //digitalWrite(buzzPin, HIGH);
      //tone(buzzPin,100);
      delay(1000);
     // digitalWrite(buzzPin, LOW);
      //delay(1000);
     
    } else {
      // Don't buzz
      Serial.println("i m in off mode");
      //digitalWrite(buzzPin, HIGH);
      //noTone(buzzPin);
      delay(1000);
      
    }

     
}

void fourthsensor(){ // This function is for second sensor.
    int duration4, distance4;
    digitalWrite (trigPin4, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin4, LOW);
    duration4 = pulseIn (echoPin4, HIGH);
    distance4 = (duration4/2) / 29.1;

      Serial.print("For right sensor ");  
      Serial.print(distance4);  
      Serial.print("cm    ");
     Serial.print("cm    ");
 // if distance less than 0.5 meter and more than 0 (0 or less means over range) 
    if (distance4 <= 70 ) {
      // Buzz
      Serial.println("i am in on mode");
      digitalWrite(buzzPin, HIGH);
      tone(buzzPin,50);
      delay(1000);
     // digitalWrite(buzzPin, LOW);
      //delay(1000);
     
    } else {
      // Don't buzz
      Serial.println("i m in off mode");
      digitalWrite(buzzPin, HIGH);
      noTone(buzzPin);
      delay(1000);
      
    }
}
void loop() {
Serial.println("\n");
Serial.println("\n");
Serial.println("\n");
Serial.println("\n");
firstsensor();
secondsensor();
thirdsensor();
fourthsensor();
delay(1000);
} 
