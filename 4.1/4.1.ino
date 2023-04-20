#include <Servo.h>

#define SERVO_PIN 2
#define boton1 12
#define boton2 10
#define boton3 8
#define boton4 6
#define boton5 4

Servo servo;

void setup() {
  servo.attach(SERVO_PIN);

  pinMode(boton1, INPUT_PULLUP);
  pinMode(boton2, INPUT_PULLUP);
  pinMode(boton3, INPUT_PULLUP);
  pinMode(boton4, INPUT_PULLUP);
  pinMode(boton5, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(boton1) == LOW) {
    servo.write(0);
  } else if (digitalRead(boton2) == LOW) {
    servo.write(45);
  } else if (digitalRead(boton3) == LOW) {
    servo.write(90);
  } else if (digitalRead(boton4) == LOW) {
    servo.write(135);
  } else if (digitalRead(boton5) == LOW) {
    servo.write(180);
  }
  
  delay(20);
}