#define PIN_1 12  
#define PIN_2 11  
#define PIN_3 10 
#define PIN_4 9
#define PIN_5 8 
#define PIN_6 7 
#define PIN_7 6 
#define PIN_8 5
#define PIN_9 4
#define PIN_10 3 
 

#define BTN1 2  
#define BTN2 13  
#define BTN3 A0
#define BTN4 A1 


#define SEC1 0b00000001
#define SEC2 0b00000010
#define SEC3 0b00000100
#define SEC4 0b00001000


unsigned char display = 0; 
unsigned char secuencia = 0; 

void setup() {
  pinMode(PIN_1, OUTPUT);
  pinMode(PIN_2, OUTPUT);
  pinMode(PIN_3, OUTPUT);
  pinMode(PIN_4, OUTPUT);
  pinMode(PIN_5, OUTPUT);
  pinMode(PIN_6, OUTPUT);
  pinMode(PIN_7, OUTPUT);
  pinMode(PIN_8, OUTPUT);
  pinMode(PIN_9, OUTPUT);
  pinMode(PIN_10, OUTPUT);
  
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  pinMode(BTN4, INPUT_PULLUP);
}

void loop() {
 
  int estadoBtn1 = digitalRead(BTN1);
  int estadoBtn2 = digitalRead(BTN2);
  int estadoBtn3 = digitalRead(BTN3);
  int estadoBtn4 = digitalRead(BTN4);
  

  if (estadoBtn1 == LOW) {
    secuencia = SEC1;
  } else if (estadoBtn2 == LOW) {
    secuencia = SEC2;
  } else if (estadoBtn3 == LOW) {
    secuencia = SEC3;
  } else if (estadoBtn4 == LOW) {
    secuencia = SEC4;
  }
  
 
  switch (secuencia) {
    case SEC1:
      display = 0b01111110;
      break;
    case SEC2:
      display = 0b00110000;
      break;
    case SEC3:
      display = 0b01011010;
      break;
    case SEC4:
      display = 0b01001110;
      break;
    default:
      display = 0;
      break;
  }
  

  digitalWrite(PIN_1, bitRead(display, 0));
  digitalWrite(PIN_2, bitRead(display, 1));
  digitalWrite(PIN_3, bitRead(display, 1));
  digitalWrite(PIN_4, bitRead(display, 1));
  digitalWrite(PIN_5, bitRead(display, 1));
  digitalWrite(PIN_6, bitRead(display, 1));
  digitalWrite(PIN_7, bitRead(display, 1));
  digitalWrite(PIN_8, bitRead(display, 1));
  digitalWrite(PIN_9, bitRead(display, 1));
  digitalWrite(PIN_10, bitRead(display, 1));
}
#define PIN_1 12  
#define PIN_2 11  
#define PIN_3 10 
#define PIN_4 9
#define PIN_5 8 
#define PIN_6 7 
#define PIN_7 6 
#define PIN_8 5
#define PIN_9 4
#define PIN_10 3 
 

#define BTN1 2  
#define BTN2 13  
#define BTN3 A0
#define BTN4 A1 


#define SEC1 0b00000001
#define SEC2 0b00000010
#define SEC3 0b00000100
#define SEC4 0b00001000


unsigned char display = 0; 
unsigned char secuencia = 0; 

void setup() 
{
  pinMode(PIN_1, OUTPUT);
  pinMode(PIN_2, OUTPUT);
  pinMode(PIN_3, OUTPUT);
  pinMode(PIN_4, OUTPUT);
  pinMode(PIN_5, OUTPUT);
  pinMode(PIN_6, OUTPUT);
  pinMode(PIN_7, OUTPUT);
  pinMode(PIN_8, OUTPUT);
  pinMode(PIN_9, OUTPUT);
  pinMode(PIN_10, OUTPUT);
  
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  pinMode(BTN4, INPUT_PULLUP);
}

void loop() 
{
 
  int estadoBtn1 = digitalRead(BTN1);
  int estadoBtn2 = digitalRead(BTN2);
  int estadoBtn3 = digitalRead(BTN3);
  int estadoBtn4 = digitalRead(BTN4);
  

  if (estadoBtn1 == LOW) {
    secuencia = SEC1;
  } else if (estadoBtn2 == LOW) {
    secuencia = SEC2;
  } else if (estadoBtn3 == LOW) {
    secuencia = SEC3;
  } else if (estadoBtn4 == LOW) {
    secuencia = SEC4;
  }
  
 
  switch (secuencia) {
    case SEC1:
      display = 0b01111110;
      break;
    case SEC2:
      display = 0b00110000;
      break;
    case SEC3:
      display = 0b01011010;
      break;
    case SEC4:
      display = 0b01001110;
      break;
    default:
      display = 0;
      break;
  }
  

  digitalWrite(PIN_1, bitRead(display, 0));
  digitalWrite(PIN_2, bitRead(display, 1));
  digitalWrite(PIN_3, bitRead(display, 1));
  digitalWrite(PIN_4, bitRead(display, 1));
  digitalWrite(PIN_5, bitRead(display, 1));
  digitalWrite(PIN_6, bitRead(display, 1));
  digitalWrite(PIN_7, bitRead(display, 1));
  digitalWrite(PIN_8, bitRead(display, 1));
  digitalWrite(PIN_9, bitRead(display, 1));
  digitalWrite(PIN_10, bitRead(display, 1));
}