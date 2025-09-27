int green = 11;
int yellow = 10;
int red = 9;
int white1 = 12;
int white2 = 8;
int buzz = 7;
int button1 = 13;
int button2 = 6;
bool buttonPressed = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(white1, OUTPUT);
  pinMode(white2, OUTPUT);
  pinMode(buzz, OUTPUT);


  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green, HIGH);
  digitalWrite(buzz, HIGH);
  delay(100);
  digitalWrite(buzz, LOW);
  delay(900);
  digitalWrite(green, LOW);

  digitalWrite(yellow, HIGH);
  digitalWrite(buzz, HIGH);
  delay(100);
  digitalWrite(buzz, LOW);
  delay(900);
  digitalWrite(yellow, LOW);

  digitalWrite(red, HIGH);
  digitalWrite(buzz, HIGH);
  delay(100);
  digitalWrite(buzz, LOW);
  delay(random(900, 9001));
  digitalWrite(red, LOW);

  while(buttonPressed == 0){
    digitalWrite(white1, HIGH);
    digitalWrite(white2, HIGH);
    if (digitalRead(button1) == 0){
      buttonPressed = 1;
      digitalWrite(white2, LOW);
    }else if(digitalRead(button2) == 0){
      buttonPressed = 1;
      digitalWrite(white1, LOW);
    }
  }

  digitalWrite(buzz, HIGH);
  delay(100);
  digitalWrite(buzz, LOW);
  delay(100);
  digitalWrite(buzz, HIGH);
  delay(100);
  digitalWrite(buzz, LOW);
  delay(100);
  digitalWrite(buzz, HIGH);
  delay(100);
  digitalWrite(buzz, LOW);
  delay(100);
  digitalWrite(buzz, HIGH);
  delay(1000);
  digitalWrite(buzz, LOW);
  delay(2000);
  digitalWrite(white1, LOW);
  digitalWrite(white2, LOW);
  buttonPressed = 0;

}
