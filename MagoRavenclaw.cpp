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

string MagoRavenclaw :: toString(){
	return "Astucia: "+to_string(astucia)+" Inteligencia: "+to_string(inteligencia)+" Lealtad: "+to_string(lealtad)
	+" Valentia: "+to_string(valentia)+" Creatividad: "+to_string(creatividad);
}