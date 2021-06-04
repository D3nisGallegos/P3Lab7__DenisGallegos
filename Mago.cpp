#include "Mago.h"
#include <math.h>
#include <ctime>
#include <cmath>

Mago::Mago(int validador){
	//srand(time(NULL));
	if (validador == 1){   //GRYFFINDOR
		astucia = 1 + rand() % (99);
		inteligencia = 1 + rand() % (99);
		lealtad = 1 + rand() % (99);
	}else if (validador == 2){   //SLYTHERIN
		lealtad = 1 + rand() % (99);
		inteligencia = 1 + rand() % (99);
		valentia = 1 + rand() % (99);
	}else if (validador == 3){   //HUFFLEPUFF
		astucia = 1 + rand() % (99);
		inteligencia = 1 + rand() % (99);
		valentia = 1 + rand() % (99);
	}else if (validador == 4){   //RAVENCLAW
		astucia = 1 + rand() % (99);
		lealtad = 1 + rand() % (99);
		valentia = 1 + rand() % (99);
	}
}

int Mago :: GETastucia(){
	return astucia;
}

int Mago :: GETinteligencia(){
	return inteligencia;
}

int Mago :: GETlealtad(){
	return lealtad;
}

int Mago :: GETvalentia(){
	return valentia;
}

void Mago :: SETastucia(int x){
	astucia = x; 
}

void Mago :: SETinteligencia(int x){
	inteligencia = x; 
}

void Mago :: SETlealtad(int x){
	lealtad = x; 
}

void Mago :: SETvalentia(int x){
	valentia = x; 
}

string Mago :: toString(){
	return "";
}