//Incluyo la libreria de manejo de la estacion Interseccion de Calles.
#include <LibSemaforo.h>

void setup() {
  //Función de inicialización del sistema.
  inicializar_sistema();
}

void loop() {

  //Enciende Buzzer 1.
  buzzer1.encender();

  //Espera de 1 segundo.
  delay(1000);

  //Apaga Buzzer 1.
  buzzer1.apagar();

  //Espera de 3 segundos.
  delay(3000);

  //Enciende Buzzer 2.
  buzzer2.encender();

  //Espera de 1 segundo.
  delay(1000);

  //Apaga Buzzer 2.
  buzzer2.apagar();

  //Espera de 3 segundos.
  delay(3000);

}
