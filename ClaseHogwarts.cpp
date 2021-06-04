#include "ClaseHogwarts.h"
#include <iostream>

using namespace std; 

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

int ClaseHogwarts :: promediohabilidades(){
	cout << "Promedio de habilidades de Gryffindor: " <<endl; 
	int promastucia = 0; 
	int prominteligencia = 0; 
	int promlealtad = 0; 
	int promvalentia = 0; 
	
	int promatrevimiento = 0; 
	int promliderazgo = 0; 
	int prompaciencia =0; 
	int promcreatividad = 0; 
	for (int c = 0; c < magos1.size();c++){
		MagoGryffindor* magotemp = dynamic_cast<MagoGryffindor*>(magos1 [c]);
		promastucia += magotemp->GETastucia();
		prominteligencia += magotemp->GETinteligencia();
		promlealtad += magotemp->GETlealtad();
		promvalentia += magotemp->GETvalentia();
		promatrevimiento += magotemp->GETatrevimiento();
	}
	cout << "Astucia: " << promastucia / magos1.size() <<endl;
	cout << "Inteligencia: " << prominteligencia / magos1.size() <<endl;
	cout << "Lealtad: " << promlealtad / magos1.size() <<endl;
	cout << "Valentia: " << promvalentia / magos1.size() <<endl;
	cout << "Atrevimiento: " << promatrevimiento / magos1.size() <<endl;
	promastucia = 0; 
	prominteligencia = 0; 
	promlealtad = 0; 
	promvalentia = 0;
	for (int c = 0; c < magos2.size();c++){
		MagoSlytherin* magotemp = dynamic_cast<MagoSlytherin*>(magos1 [c]);
		promastucia += magotemp->GETastucia();
		prominteligencia += magotemp->GETinteligencia();
		promlealtad += magotemp->GETlealtad();
		promvalentia += magotemp->GETvalentia();
		promliderazgo += magotemp->GETliderazgo();
	}
	cout << "Astucia: " << promastucia / magos2.size() <<endl;
	cout << "Inteligencia: " << prominteligencia / magos2.size() <<endl;
	cout << "Lealtad: " << promlealtad / magos2.size() <<endl;
	cout << "Valentia: " << promvalentia / magos2.size() <<endl;
	cout << "Atrevimiento: " << promliderazgo / magos2.size() <<endl;
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