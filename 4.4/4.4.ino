int pinBuzzer =4;
int Do = 261;
int Re = 293;
int Mi = 329;
int Fa = 349;
int Sol = 392;
int La = 440;
int Si = 493;
int do4 = 523;
int doS4 = 554;
int re4 = 587;
int reS4 = 622;
int mi4 = 659;
int fa4 = 698;
int faS4 = 739;
int sol4 = 783;
int solS4 = 830;
int la4 = 880;
int laS4 = 932;
int si4 = 987;
double redonda = 2300; //tenia 2000
double blanca = redonda / 2; // la mitad de la redonda
double negra = redonda / 4; // la cuarta parte de la redonda
double corchea = redonda / 8; // la octava parte de la redonda
double semicorchea = redonda / 16; // tambien llamada doble corchea y es la dieciseisava parte de una redonda
double fusa = redonda / 32; // tambien llamada triple corchea y es la treintaidosava parte de una redonda
double semifusa = redonda / 64; //  tambien llamada cuadruple corchea y es la sesentaicuatroava parte de una redonda

#define boton1 2
#define boton2 3
#define led 5
#define led2 6

int duracion = 500;
int retardo = 1000;

void setup()
{
  pinMode(boton1, INPUT_PULLUP);
   pinMode(boton2, INPUT_PULLUP);
  pinMode(led, OUTPUT);
   pinMode(led2, OUTPUT);
}


void loop() {
  if(digitalRead(boton1)==0){
    digitalWrite(led, HIGH);
tone(pinBuzzer,Do, duracion);
delay(retardo);
tone(pinBuzzer, Re, duracion);
delay(retardo);
tone(pinBuzzer, Mi, duracion);
delay(retardo);
tone(pinBuzzer,Fa, duracion);
delay(retardo);
tone(pinBuzzer,Sol, duracion);
delay(retardo);
tone(pinBuzzer,La, duracion);
delay(retardo);
tone(pinBuzzer,Si, duracion);
delay(retardo);
 
    
}
  if(digitalRead(boton2)==0){
    digitalWrite(led2, HIGH);
tone(pinBuzzer, do4, negra);delay(negra);
  tone(pinBuzzer, do4, negra);delay(negra);
  tone(pinBuzzer, sol4, negra);delay(negra);
  tone(pinBuzzer, sol4, negra); delay(negra);
  tone(pinBuzzer, la4, negra); delay(negra);
  tone(pinBuzzer, la4, negra); delay(negra);
  tone(pinBuzzer, sol4, blanca); delay(blanca);
  tone(pinBuzzer, fa4, negra); delay(negra);
  tone(pinBuzzer, fa4, negra);delay(negra);
  tone(pinBuzzer, mi4, negra);delay(negra);
  tone(pinBuzzer, mi4, negra);delay(negra);
  tone(pinBuzzer, re4, negra); delay(negra);
  tone(pinBuzzer, re4, negra); delay(negra);
  tone(pinBuzzer, do4, blanca); delay(blanca);
    
}
}
