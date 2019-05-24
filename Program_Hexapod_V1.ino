#include <Servo.h>

/*
 *  Keterangan
 *  1 = Lengan
 *  2 = Siku
 *  3 = Bahu
 */


 
//Kiri itu 0 (atas) - 180 (bawah)
Servo depan_kiri_1;  // create servo object to control a servo
Servo depan_kiri_2; 
Servo blkng_kiri_1;
Servo blkng_kiri_2;

//Kanan itu 180 (Atas) - 0 (Bawah)
Servo depan_kanan_1;
Servo depan_kanan_2;
Servo blkng_kanan_1;
Servo blkng_kanan_2;
 
int pos = 90;    // variable to store the servo position

void setup()
{
  Serial.begin(9600);
  depan_kiri_1.attach(2);  // attaches the servo on pin 9 to the servo object
  depan_kiri_2.attach(3);  // attaches the servo on pin 9 to the servo object
  depan_kanan_1.attach(4);
  depan_kanan_2.attach(5);
  blkng_kiri_1.attach(6);
  blkng_kiri_2.attach(7);
  blkng_kanan_1.attach(8);
  blkng_kanan_2.attach(9);
  depan_kiri_1.write(0);
  depan_kiri_2.write(0);
  depan_kanan_1.write(0);
  depan_kanan_2.write(0);
  blkng_kiri_1.write(0);
  blkng_kiri_2.write(0);
  blkng_kanan_1.write(0);
  blkng_kanan_2.write(0);
}


void loop()
{
  depan_kiri_1.write(pos);              // tell servo to go to position in variable 'pos'
  depan_kiri_2.write(pos);
  depan_kanan_1.write(pos);
  depan_kanan_2.write(pos);
  blkng_kiri_1.write(pos);
  blkng_kiri_2.write(pos);
  blkng_kanan_1.write(pos);
  blkng_kanan_2.write(pos);
  delay(1000);
  
  depan_kiri_1.write(35);              // tell servo to go to position in variable 'pos'
  depan_kiri_2.write(50);     
  depan_kanan_1.write(125);
  depan_kanan_2.write(140);
  blkng_kiri_1.write(35);
  blkng_kiri_2.write(50);
  blkng_kanan_1.write(125);
  blkng_kanan_2.write(140);
  delay(1000);
}
