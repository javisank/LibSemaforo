//Incluyo la libreria de manejo de la estacion Interseccion de Calles.
#include <LibSemaforo.h>

void setup() {
  //Función de inicialización del sistema.
  inicializar_sistema();
}

void loop() {
  
  //Enciendo las luces.
  luz_calle.encender();
  
  //Espera de 1 segundo.
  delay(1000);

  //Apago las luces.
  luz_calle.apagar();

  //Espera de 1 segundo.
  delay(1000);

}
