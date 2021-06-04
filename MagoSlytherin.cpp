#include "MagoSlytherin.h"
#include <math.h>
#include <ctime>
#include <cmath>

MagoSlytherin::MagoSlytherin() : Mago(2){
	
	astucia = 80 + rand() % (20);
	liderazgo = 80 + rand() % (20);
}

int MagoSlytherin :: GETliderazgo(){
	return liderazgo;
}

void MagoSlytherin :: SETliderazgo(int x){
	liderazgo = x;
}

string MagoSlytherin :: toString(){
	return "Astucia: "+to_string(astucia)+" Inteligencia: "+to_string(inteligencia)+" Lealtad: "+to_string(lealtad)
	+" Valentia: "+to_string(valentia)+" Liderazgo: "+to_string(liderazgo);
}