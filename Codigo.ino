#include <Servo.h>

Servo m1;  // crea el objeto servo 1
Servo m2; // crea el objeto servo 2

int pos = 0;    // posicion del servo
int i = 2;      // selector de secuencia de servo
void setup() {
  m1.attach(9);  // vincula el servo 1 al pin digital 9
  m2.attach(11); // vincula el servo 2 al pin digital 11
}

void loop() {

if (i==1) {
  
  //varia la posicion de 0 a 180, con esperas de 5ms
  for (pos = 0; pos <= 180; pos += 1) 
  {
    m1.write(pos);              
    delay(5);                       
  }

  //varia la posicion de 0 a 180, con esperas de 1ms
  for (pos = 180; pos >= 0; pos -= 1) 
  {
    m1.write(pos);              
    delay(1);                       
  }

  
  //varia la posicion de 0 a 180, con esperas de 5ms
  for (pos = 0; pos <= 180; pos += 1) 
  {
    m2.write(pos);              
    delay(5);                       
  }

  //varia la posicion de 0 a 180, con esperas de 1ms
  for (pos = 180; pos >= 0; pos -= 1) 
  {
    m2.write(pos);              
    delay(1);                       
  }
}

if (i==2) {
  
  //varia la posicion de 0 a 180, con esperas de 5ms
  for (pos = 0; pos <= 180; pos += 1) 
  {
    m2.write(pos);              
    delay(5);                       
  }

  //varia la posicion de 0 a 180, con esperas de 1ms
  for (pos = 180; pos >= 0; pos -= 1) 
  {
    m2.write(pos);              
    delay(1);                       
  }

  
  //varia la posicion de 0 a 180, con esperas de 5ms
  for (pos = 0; pos <= 180; pos += 1) 
  {
    m1.write(pos);              
    delay(5);                       
  }

  //varia la posicion de 0 a 180, con esperas de 1ms
  for (pos = 180; pos >= 0; pos -= 1) 
  {
    m1.write(pos);              
    delay(1);                       
  }
}

if (i==3) {
  
  //varia la posicion de 0 a 180, con esperas de 5ms
  for (pos = 0; pos <= 180; pos += 1) 
  {
    m1.write(pos);              
    delay(5);                       
  }

  //varia la posicion de 0 a 180, con esperas de 1ms
  for (pos = 180; pos >= 0; pos -= 1) 
  {
    m1.write(pos);              
    delay(1);                       
  }

  
  //varia la posicion de 0 a 180, con esperas de 5ms
  for (pos = 0; pos <= 180; pos += 1) 
  {
    m1.write(pos);              
    delay(5);                       
  }

  //varia la posicion de 0 a 180, con esperas de 1ms
  for (pos = 180; pos >= 0; pos -= 1) 
  {
    m1.write(pos);              
    delay(1);                       
  }
}
}
