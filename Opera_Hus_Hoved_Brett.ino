//Skal dempe of forsterke lysene, blinke lysene, og løpe rundt opera huset
int lights[] = {9, 8, 7};
int light = 0;

int button1 = 24;
int button2 = 25;
int button3 = 26;
int button4 = 27;
int lightStrength = 50;
int blinkToggle = 0;

void setup() {
  pinMode(button1, OUTPUT);
  pinMode(button2, OUTPUT);
  pinMode(button3, OUTPUT);
  pinMode(button4, OUTPUT);
  pinMode(lights[0], OUTPUT);
  pinMode(lights[1], OUTPUT);
  pinMode(lights[2], OUTPUT);
  
  analogWrite(lights[0], lightStrength);
  analogWrite(lights[1], lightStrength);
  analogWrite(lights[2], lightStrength);

}

void loop() {
//Sjekker om den får meldinger fra porten.
  while(Serial.available> 0){
    Receive = Serial.read()
  }
//Forsterke lyset
  while (lightStrength <= 235){
    if (digitalRead(button1) == HIGH){
      delay(100);
      lightStrength = lightStrength + 20;
      delay(100);
      analogWrite(lights[0], lightStrength);
      analogWrite(lights[1], lightStrength);
      analogWrite(lights[2], lightStrength);
     }
   }
   
//Dempe lyset
  while (lightStrength >= 65){
    if (digitalRead(button2) == HIGH){
      delay(100);
      lightStrength = lightStrength - 20;
      delay(100);
      analogWrite(lights[0], lightStrength);
      analogWrite(lights[1], lightStrength);
      analogWrite(lights[2], lightStrength);
    }
  }
 
//Blinke lyset
  while(blinkToggle == 1){
    if (digitalRead(button3) == HIGH){
      delay(100);
      blinkToggle = 0;
    }
  }
  while(blinkToggle == 0){
    if (digitalRead(button3) == HIGH){
      delay(100);
      blinkToggle = 1;
    }
  }
  while(blinkToggle == 1){
    delay(150);
    analogWrite(lights[0], 0);
    analogWrite(lights[1], 0);
    analogWrite(lights[2], 0);
    delay(150);
    analogWrite(lights[0], lightStrength);
    analogWrite(lights[1], lightStrength);
    analogWrite(lights[2], lightStrength);
  }
  
//Løpe rundt
  if (digitalRead(button4) == HIGH){
    delay(100);
    
  }

}
