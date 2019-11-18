/*
  LibSemaforo.h - Libreria para el manejo de la 
  estacion del cruce de calles con semaforos.
  Javier Sankowicz.
*/

#ifndef LibSemaforo_h
#define LibSemaforo_h

#include "Arduino.h"

#define ROJO 0
#define AMARILLO 1
#define VERDE 2

#define PRESIONADO LOW
#define NO_PRESIONADO HIGH

#define ACTIVADO LOW
#define DESACTIVADO HIGH

#define NOCHE 0
#define DIA 1

//Probar en ambiente y ver que valores tira, para luego mapearlo a un porcentaje.
#define MAXIMO_LUZ 250
#define MINIMO_LUZ 220

#define REPETIR(X) for(int i=0;i<X;i++)

const int pin_Semaforo1_rojo = 2;
const int pin_Semaforo1_amarillo = 3;
const int pin_Semaforo1_verde = 4;
const int pin_Semaforo2_rojo = 5;
const int pin_Semaforo2_amarillo = 6;
const int pin_Semaforo2_verde = 7;

const int pin_Buzzer1 = 8;
const int pin_Buzzer2 = 9;

const int pin_Pulsador1 = 10;
const int pin_Pulsador2 = 11;

const int pin_Luz_Calle = 12;

const int pin_Sensor_Calle2 = A0;
const int pin_Sensor_Calle1 = A2;

const int pin_Sensor_Luz = A1;


extern void mostrar_cartel(String);
extern void mostrar_numero(int num);
extern int ingresar_numero();
extern void inicializar_sistema();
extern void finalizar();


//Variables para manejo de sensores y pulsadores
extern int estado_sensor_luz;
extern int estado_pulsador1;
extern int estado_pulsador2;
extern int estado_sensor1;
extern int estado_sensor2;
extern int numero_ingresado;
extern int valor_sensor_luz;



class Semaforo
{
  public:
    Semaforo(int pin_rojo,int pin_amarillo,int pin_verde);
    void encender(int luz);
    void apagar(int luz);
  private:
    int _pin_rojo;
	int _pin_amarillo;
	int _pin_verde;
};

class Buzzer
{
	public:
		Buzzer(int pin);
		void encender();
		void apagar();
	private:
		int _pin;
};

class LuzCalle
{
	public:
		LuzCalle(int pin);
		void encender();
		void apagar();
	private:
		int _pin;
};

class SensorCalle
{
	public:
		SensorCalle(int pin);
		int leer();
		void esperar(int estado);
	private:
		int _pin;
	
};

class SensorLuz
{
	public:
		SensorLuz(int pin,int valorNoche,int valorDia);
		int leer();
		int leer_analogico();
		void esperar(int estado);
	private:
		int _pin;
		int _valorNoche;
		int _valorDia;
};

class Pulsador
{
	public:
		Pulsador(int pin);
		int leer();
		void esperar(int estado);
	private:
		int _pin;
};

//Variables elementos del sistema
extern Buzzer buzzer1;
extern Buzzer buzzer2;
extern Pulsador pulsador1;
extern Pulsador pulsador2;
extern SensorLuz sensor_luz;
extern SensorCalle sensor_calle1;
extern SensorCalle sensor_calle2;
extern Semaforo semaforo1;
extern Semaforo semaforo2;
extern LuzCalle luz_calle;



#endif

