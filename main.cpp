#include <iostream>
#include <math.h>
#include <ctime>
#include <cmath>
#include "Mago.h"
#include "MagoGryffindor.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenClaw.h"
#include "SombreroClasificador.h"
#include "ClaseHogwarts.h"
#include <vector>
#include <string>
#include <random>
#include <iomanip>

using namespace std;

constexpr int FLOAT_MIN = 0;
constexpr int FLOAT_MAX = 1; 
vector <Mago*> generarmagos();

int menu();

int main(int argc, char** argv) {
	vector <Mago*> magosgenerados; 
	int opcion = menu();
	bool validargeneracion = false; 
	while (opcion != 4){
		switch (opcion){
			case 1:
				{
				validargeneracion = true;
				cout << "-------GENERAR MAGOS------" <<endl; 
				magosgenerados = generarmagos();
				cout << "Los magos se han generado correctamente. "<<endl; 
				cout << "-------FINAL GENERAR MAGOS------" <<endl; 
				break; 
				}
			case 2:
				{
				cout << "-------IMPRIMIR MAGOS POR CASA------" <<endl; 
				if (validargeneracion == true){
					SombreroClasificador* sombrero = new SombreroClasificador();
					ClaseHogwarts* clase = new ClaseHogwarts();
					clase = sombrero->clasificar(magosgenerados, 2021);
					clase->imprimirporcasa();
				}else {
					cout << "Debe generar magos antes de solicitar esta opcion." <<endl;	
				}
				cout << "-------FINAL IMPRIMIR MAGOS POR CASA------" <<endl; 
				break; 
				}
			case 3: 
				{
				cout << "-------IMPRIMIR PROMEDIOS POR CASA------" <<endl; 
				if (validargeneracion == true){
					SombreroClasificador* sombrero = new SombreroClasificador();
					ClaseHogwarts* clase = new ClaseHogwarts();
					clase = sombrero->clasificar(magosgenerados, 2021);
					clase->promediohabilidades();
				}else {
					cout << "Debe generar magos antes de solicitar esta opcion." <<endl;	
				}
				cout << "-------FINAL IMPRIMIR PROMEDIOS POR CASA------" <<endl; 	
				break; 
				}
		}//Fin del switch.
		cout <<endl; 
		opcion = menu(); 
	}//Fin del while. 
	
	
	return 0;
}

vector <Mago*> generarmagos(){
	srand(time(NULL));
	vector <Mago*> magos; 
	for (int c = 0; c < 20; c++){
		//int r = 1 + rand() % (99);
		double random = FLOAT_MIN + (float)(rand()) / ((float)(RAND_MAX/(FLOAT_MAX - FLOAT_MIN)));//r / 100; 
		if (random >= 0 && random < 0.25){
			Mago* objeto = new MagoSlytherin(); 
			magos.push_back(objeto);
		}else if (random >= 0.25 && random < 0.50){
			Mago* objeto = new MagoRavenclaw(); 
			magos.push_back(objeto);
		}else if (random >= 0.50 && random < 0.75){
			Mago* objeto = new MagoHufflepuff(); 
			magos.push_back(objeto);
		}else if (random >= 0.75 && random <= 0.99){
			Mago* objeto = new MagoGryffindor(); 
			magos.push_back(objeto);
		}
	}
	return magos;	
}

int menu(){
	int opcion = 0; 
	while (opcion != 4){
		cout << "--------MENU--------" <<endl;
		cout << " 1) Generar magos. "<<endl;
		cout << " 2) Imprimir magos por casa. " <<endl; 
		cout << " 3) Imprimir promedios por casa. " <<endl;
		cout << " 4) Salir." <<endl; 
		cout << "---------------------" <<endl; 
		cout << " Ingrese la opcion: " <<endl; 
		cin>> opcion; 
		cin.ignore();
		if (opcion == 4){
			cout << "Ha elegido salir del sistema. " <<endl; 
		}else if (opcion > 0 && opcion <4){
			break; 
		}
	}
	return opcion; 
}




