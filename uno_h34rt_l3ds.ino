/*
   GONNA MAKE HISTORY!
  Heart-shaped leds
  lvl: intermediate
  8 LEDS
  HAVE TO BRING IN RED LEDS DONE~
  Florea Bogdan
  Nothing new to add for now
  Versiunea 1.0

  Tired to work anymore 2:55 AM 17.08.2016
  16.08.2016
*/


void StandBy()
{
        int count = 0;
        while(count % 3 == 0) {
        for (int i = 13; i > 5; i--)
      {

        digitalWrite(i, HIGH);
        delay(150);
        digitalWrite(i, LOW);
        delay(150);
      }
        count++;
        }
      
}
void metodaX()
{
  for (int i = 6; i <= 10; i++) {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
      delay(500);
      digitalWrite(i+1, HIGH);
      delay(500);
      digitalWrite(i+1, LOW);
      delay(500);
      digitalWrite(i+2, HIGH);
      delay(210);
    }
 
  
}

void setup() {
  Serial.begin(9600);
  Serial.println("Led-uri in forma de inima!");
  Serial.println("Apasati A, B, C sau D pentru combinatii de culori");
  pinMode(13, OUTPUT);// initialize digital pin 13 as an output.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);// initialize digital pin 10
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  int count = 0;
  char data = Serial.read();
  switch (data)
  {
    case 'A':
      Serial.println("Desenam inimioara!");
      for (int i = 6; i <= 13; i++) {

        digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
        delay(200);              // wait for 200ms
        digitalWrite(i, LOW);    // turn
        delay(200);
      }
      break;
    case 'B':
      Serial.println("Intreaga mea inimioara!");
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2100);
      break;
    case 'C':
      //pare pe breadboard
      Serial.println("Distractie cu pare!");
      for (int i = 6; i <= 13; i++)
      {
        if (i % 2 == 0)
          digitalWrite(i, HIGH);
        else
          digitalWrite(i, LOW);
      }
      break;

    case 'D':

      Serial.println("Distractie cu impare!");
      for (int i = 6; i <= 13; i++)
      {
        if (i % 2 == 0)
          digitalWrite(i, HIGH);
        else
          digitalWrite(i, LOW);
      }
      break;

    case 'X':

    Serial.println("X move");
    delay(500);
    metodaX();
    
    break;


    default:
      delay(1000);
      StandBy();

      break;
  }

}
