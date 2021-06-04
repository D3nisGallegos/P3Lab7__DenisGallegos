#include "MagoRavenclaw.h"
#include <math.h>
#include <ctime>
#include <cmath>

MagoRavenclaw::MagoRavenclaw() : Mago(4){
	srand(time(NULL));
	inteligencia = 80 + rand() % (20);
	creatividad = 80 + rand() % (20);
}

int MagoRavenclaw :: GETcreatividad(){
	return creatividad;
}

void MagoRavenclaw :: SETcreatividad(int x){
	creatividad = x;
}