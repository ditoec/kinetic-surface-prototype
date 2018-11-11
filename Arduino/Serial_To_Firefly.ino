#include <Servo.h>

/*
  Reading a serial ASCII-encoded string.
 
 This sketch demonstrates the Serial parseInt() function.
 It looks for an ASCII string of comma-separated values.
 It parses them into ints, and uses those to fade an RGB LED.
 
 This example code is in the public domain.
 */
int data[28];
String temp;
int inbyte;
int j = 0;
boolean start_parse = false;
Servo s0;
Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;
Servo s7;
Servo s8;
Servo s9;
Servo s10;
Servo s11;
Servo s12;
Servo s13;
Servo s14;
Servo s15;
Servo s16;
Servo s17;
Servo s18;
Servo s19;
Servo s20;
Servo s21;
Servo s22;
Servo s23;
Servo s24;

void setup() {
  // initialize serial:
  Serial.begin(115200);
  pinMode(13,OUTPUT);
  temp = String("");
  s0.attach(21);
  s1.attach(20);
  s2.attach(19);
  s3.attach(18);
  s4.attach(17);
  s5.attach(16);
  s6.attach(15);
  s7.attach(14);
  s8.attach(2);
  s9.attach(3);
  s10.attach(4);
  s11.attach(5);
  s12.attach(6);
  s13.attach(7);
  s14.attach(8);
  s15.attach(9);
  s16.attach(10);
  s17.attach(11);
  s18.attach(12);
  s19.attach(13);
  s20.attach(22);
  s21.attach(23);
  s22.attach(24);
  s23.attach(25);
  s24.attach(27);
  s0.write(0);
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4.write(0);
  s5.write(0);
  s6.write(0);
  s7.write(0);
  s8.write(0);
  s9.write(0);
  s10.write(0);
  s11.write(0);
  s12.write(0);
  s13.write(0);
  s14.write(0);
  s15.write(0);
  s16.write(0);
  s17.write(0);
  s18.write(0);
  s19.write(0);
  s20.write(0);
  s21.write(0);
  s22.write(0);
  s23.write(0);
  s24.write(0);
}

void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {
    inbyte = Serial.read();
    if(inbyte=='|'){
      start_parse = true;
    }
    if(start_parse){
      if(inbyte==','){
        data[j] = temp.toInt();
        temp = String("");
        j++;
        //Serial.print(data[j]);
        //Serial.print(" ");
      }
      else if(inbyte=='/')
        {
          j=0;
          start_parse = false;
          if (data[2]>data[1]) {
            Serial.println("0");
          }
          else{
            Serial.println("1");
          }
          s0.write(data[3]);
          s1.write(data[4]);
          s2.write(data[5]);
          s3.write(data[6]);
          s4.write(data[7]);
          s5.write(data[8]);
          s6.write(data[9]);
          s7.write(data[10]);
          s8.write(data[11]);
          s9.write(data[12]);
          s10.write(data[13]);
          s11.write(data[14]);
          s12.write(data[15]);
          s13.write(data[16]);
          s14.write(data[17]);
          s15.write(data[18]);
          s16.write(data[19]);
          s17.write(data[20]);
          s18.write(data[21]);
          s19.write(data[22]);
          s20.write(data[23]);
          s21.write(data[24]);
          s22.write(data[25]);
          s23.write(data[26]);
          s24.write(data[27]);
        }
      else if(inbyte >= '0' & inbyte <= '9'){
        temp += (char)inbyte;
      }
    }
  }
}








