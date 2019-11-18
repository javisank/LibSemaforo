//Incluyo la libreria de manejo de la estacion Interseccion de Calles.
#include <LibSemaforo.h>

void setup() {
  //Función de inicialización del sistema.
  inicializar_sistema();
}

void loop() {

  //Leer estado del sensor de calle 1 y guardarlo en estado_sensor1.
  estado_sensor1 = sensor_calle1.leer();
  
  if(estado_sensor1 == ACTIVADO)
  {
    mostrar_cartel("Sensor 1 ACTIVADO \n");
  }
  else
  {
    mostrar_cartel("Sensor 1 DESACTIVADO \n");
  }

  //Leer estado del sensor de calle 1 y guardarlo en estado_sensor1.
  estado_sensor2 = sensor_calle2.leer();
  
  if(estado_sensor2 == ACTIVADO)
  {
    mostrar_cartel("Sensor 2 ACTIVADO \n");
  }
  else
  {
    mostrar_cartel("Sensor 2 DESACTIVADO \n");
  }

  mostrar_cartel("----------------------------- \n");
  delay(1000);

}
