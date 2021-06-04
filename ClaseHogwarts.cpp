#include "ClaseHogwarts.h"

ClaseHogwarts::ClaseHogwarts(){

}

ClaseHogwarts::ClaseHogwarts(vector <MagoGryffindor*> vector1, vector <MagoSlytherin*> vector2, vector <MagoHufflepuff*> vector3, vector <MagoRavenclaw*> vector4, int promo){
	magos1 = vector1; //Gryffindor 
	magos2 = vector2; //Slytherin
	magos3 = vector3; //Hufflepuff
	magos4 = vector4; //Ravenclaw
	promocion = promo;
}

int ClaseHogwarts :: GETpromocion(){
	return promocion;
}

void ClaseHogwarts :: SETpromocion(int x){
	promocion = x;
}

ClaseHogwarts::~ClaseHogwarts(){
	for(int c = 0; c < magos1.size(); c++) {   //Gryffindor
		if (magos1 [c])
			delete magos1 [c];   
	}
	magos1.clear();
	for(int c = 0; c < magos2.size(); c++) {  //Slytherin
		if (magos2 [c])
			delete magos2 [c];   
	}
	magos2.clear();
	for(int c = 0; c < magos3.size(); c++) {  //Hufflepuff
		if (magos3 [c])
			delete magos3 [c];   
	}
	magos3.clear();
	for(int c = 0; c < magos4.size(); c++) {  //RavenClaw
		if (magos4 [c])
			delete magos4 [c];   
	}
	magos4.clear();
}