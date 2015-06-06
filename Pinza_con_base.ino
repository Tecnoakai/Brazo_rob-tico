#include <Servo.h>

Servo rotacion;       //Servomotor de la base giratoria
Servo base;           //Servomotor que actuará  como hombro
Servo medio;          //Servomotor que actuará como codo
Servo x;         //Servomotor para poder girar la pinza
Servo pinza;          //Servomotor para abrir y cerrar la pinza

int estado = 0;

void setup() {
  Serial.begin(9600);
  rotacion.attach(1);
  rotacion.write(0);
  base.attach(2);
  base.write(0);
  medio.attach(3);
  medio.write(0);
  x.attach(4);
  x.write(0);
  pinza.attach(5);
  pinza.write(0);
}

void loop() {
if(Serial.available()>0){
  estado = Serial.read();
  }
  if (estado =='1')
  {
    rotacion.write(45);
  }
  if (estado =='2')
  {
    rotacion.write(90);
  }
  if (estado =='3')
  {
    rotacion.write(135);
  }
  if (estado =='4')
  {
    rotacion.write(180);
  }
  if (estado =='5')
  {
    rotacion.write(0);
  }
  if (estado =='6')
  {
    base.write(45);
  }
  if (estado =='7')
  {
    base.write(90);
  }
  if (estado =='8')
  {
    base.write(135);
  }
  if (estado =='9')
  {
    base.write(180);
  }
  if (estado =='10')
  {
    base.write(0);
  }
  if (estado =='11')
  {
    medio.write(45);
  }
  if (estado =='12')
  {
    medio.write(90);
  }
  if (estado =='13')
  {
    medio.write(135);
  }
  if (estado =='14')
  {
    medio.write(180);
  }
  if (estado =='15')
  {
    medio.write(0);
  }
  if (estado =='16')
  {
    x.write(45);
  }
  if (estado =='17')
  {
    x.write(90);
  }
  if (estado =='18')
  {
    x.write(135);
  }
  if (estado =='19')
  {
    x.write(180);
  }
  if (estado =='20')
  {
    x.write(0);
  }
  if (estado =='21')
  {
    pinza.write(180);
   }
   if (estado =='22')
  {
    pinza.write(0);
   }
}
