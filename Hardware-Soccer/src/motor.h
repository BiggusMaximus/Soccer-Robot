#include <Arduino.h>
#define IN1_1 2     //depan-kiri
#define IN2_1 3 
#define IN3_1 4     //depan-kanan
#define IN4_1 5
#define IN1_2 8     //belakang-kiri
#define IN2_2 9
#define IN3_2 10    //belakang-kanan
#define IN4_2 11

void motor_innit()
{
    Serial.begin(9600);
    pinMode(IN1_1, OUTPUT);
    pinMode(IN2_1, OUTPUT);
    pinMode(IN3_1, OUTPUT);
    pinMode(IN4_1, OUTPUT);
    pinMode(IN1_2, OUTPUT);
    pinMode(IN2_2, OUTPUT);
    pinMode(IN3_2, OUTPUT);
    pinMode(IN4_2, OUTPUT);
}

void stop()
{
    Serial.println("stop");
    digitalWrite(IN1_1, LOW);
    digitalWrite(IN2_1, LOW);
    digitalWrite(IN3_1, LOW);
    digitalWrite(IN4_1, LOW);
    digitalWrite(IN1_2, LOW);
    digitalWrite(IN2_2, LOW);
    digitalWrite(IN3_2, LOW);
    digitalWrite(IN4_2, LOW);
}

void maju()
{
    Serial.println("maju");
    digitalWrite(IN1_1, HIGH);
    digitalWrite(IN2_1, LOW);
    digitalWrite(IN3_1, HIGH);
    digitalWrite(IN4_1, LOW);
    digitalWrite(IN1_2, HIGH);
    digitalWrite(IN2_2, LOW);
    digitalWrite(IN3_2, HIGH);
    digitalWrite(IN4_2, LOW);
}

void mundur()
{
    Serial.println("mundur");
    digitalWrite(IN1_1, LOW);
    digitalWrite(IN2_1, HIGH);
    digitalWrite(IN3_1, LOW);
    digitalWrite(IN4_1, HIGH);
    digitalWrite(IN1_2, LOW);
    digitalWrite(IN2_2, HIGH);
    digitalWrite(IN3_2, LOW);
    digitalWrite(IN4_2, HIGH);
}

void putar_kanan()
{
    Serial.println("putar_kanan");
    digitalWrite(IN1_1, HIGH);
    digitalWrite(IN2_1, LOW);
    digitalWrite(IN3_1, LOW);
    digitalWrite(IN4_1, HIGH);
    digitalWrite(IN1_2, HIGH);
    digitalWrite(IN2_2, LOW);
    digitalWrite(IN3_2, LOW);
    digitalWrite(IN4_2, HIGH);
}

void putar_kiri()
{
    Serial.println("putar_kiri");
    digitalWrite(IN1_1, LOW);
    digitalWrite(IN2_1, HIGH);
    digitalWrite(IN3_1, HIGH);
    digitalWrite(IN4_1, LOW);
    digitalWrite(IN1_2, LOW);
    digitalWrite(IN2_2, HIGH);
    digitalWrite(IN3_2, HIGH);
    digitalWrite(IN4_2, LOW);
}

void geser_kanan()
{
    Serial.println("geser_kanan");
    digitalWrite(IN1_1, LOW);
    digitalWrite(IN2_1, HIGH);
    digitalWrite(IN3_1, HIGH);
    digitalWrite(IN4_1, LOW);
    digitalWrite(IN1_2, HIGH);
    digitalWrite(IN2_2, LOW);
    digitalWrite(IN3_2, LOW);
    digitalWrite(IN4_2, HIGH);
}

void geser_kiri()
{
    Serial.println("geser_kiri");
    digitalWrite(IN1_1, HIGH);
    digitalWrite(IN2_1, LOW);
    digitalWrite(IN3_1, LOW);
    digitalWrite(IN4_1, HIGH);
    digitalWrite(IN1_2, LOW);
    digitalWrite(IN2_2, HIGH);
    digitalWrite(IN3_2, HIGH);
    digitalWrite(IN4_2, LOW);
}

void tes_motor()
{
    maju();         delay(1000);    stop();     delay(2000);
    mundur();       delay(1000);    stop();     delay(2000);
    putar_kanan();  delay(1000);    stop();     delay(2000);
    putar_kiri();   delay(1000);    stop();     delay(2000);
    geser_kanan();  delay(1000);    stop();     delay(2000);
    geser_kiri();   delay(1000);    stop();     delay(2000);
}