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

void ClaseHogwarts :: promediohabilidades(){
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
	double n1 = (double) promastucia / magos1.size();
	double n2 = (double) prominteligencia / magos1.size();
	double n3 = (double) promlealtad / magos1.size();
	double n4 = (double) promvalentia / magos1.size();
	double n5 = (double) promatrevimiento / magos1.size();
	cout << "Astucia: " << n1 <<endl;
	cout << "Inteligencia: " << n2 <<endl;
	cout << "Lealtad: " << n3 <<endl;
	cout << "Valentia: " << n4 <<endl;
	cout << "Atrevimiento: " << n5 <<endl;
	
	cout << "Promedio de habilidades de Slytherin: " <<endl; 
	promastucia = 0; 
	prominteligencia = 0; 
	promlealtad = 0; 
	promvalentia = 0;
	for (int c = 0; c < magos2.size();c++){
		MagoSlytherin* magotemp = dynamic_cast<MagoSlytherin*>(magos2 [c]);
		promastucia += magotemp->GETastucia();
		prominteligencia += magotemp->GETinteligencia();
		promlealtad += magotemp->GETlealtad();
		promvalentia += magotemp->GETvalentia();
		promliderazgo += magotemp->GETliderazgo();
	}
	 n1 = (double) promastucia / magos2.size();
	 n2 = (double) prominteligencia / magos2.size();
	 n3 = (double) promlealtad / magos2.size();
	 n4 = (double) promvalentia / magos2.size();
	 n5 = (double) promliderazgo / magos2.size();
	cout << "Astucia: " << n1 <<endl;
	cout << "Inteligencia: " << n2 <<endl;
	cout << "Lealtad: " << n3 <<endl;
	cout << "Valentia: " << n4 <<endl;
	cout << "Liderazgo: " << n5 <<endl;
	
	cout << "Promedio de habilidades de Hufflepuff: " <<endl; 
	promastucia = 0; 
	prominteligencia = 0; 
	promlealtad = 0; 
	promvalentia = 0;
	for (int c = 0; c < magos3.size();c++){
		MagoHufflepuff* magotemp = dynamic_cast<MagoHufflepuff*>(magos3 [c]);
		promastucia += magotemp->GETastucia();
		prominteligencia += magotemp->GETinteligencia();
		promlealtad += magotemp->GETlealtad();
		promvalentia += magotemp->GETvalentia();
		prompaciencia += magotemp->GETpaciencia();
	}
	n1 = (double) promastucia / magos3.size();
	 n2 = (double) prominteligencia / magos3.size();
	 n3 = (double) promlealtad / magos3.size();
	 n4 = (double) promvalentia / magos3.size();
	 n5 = (double) prompaciencia / magos3.size();
	cout << "Astucia: " << n1 <<endl;
	cout << "Inteligencia: " << n2 <<endl;
	cout << "Lealtad: " << n3 <<endl;
	cout << "Valentia: " << n4 <<endl;
	cout << "Paciencia: " << n5 <<endl;
	
	cout << "Promedio de habilidades de RavenClaw: " <<endl; 
	promastucia = 0; 
	prominteligencia = 0; 
	promlealtad = 0; 
	promvalentia = 0;
	for (int c = 0; c < magos4.size();c++){
		MagoRavenclaw* magotemp = dynamic_cast<MagoRavenclaw*>(magos4 [c]);
		promastucia += magotemp->GETastucia();
		prominteligencia += magotemp->GETinteligencia();
		promlealtad += magotemp->GETlealtad();
		promvalentia += magotemp->GETvalentia();
		promcreatividad += magotemp->GETcreatividad();
	}
	n1 = (double) promastucia / magos4.size();
	 n2 = (double) prominteligencia / magos4.size();
	 n3 = (double) promlealtad / magos4.size();
	 n4 = (double) promvalentia / magos4.size();
	 n5 = (double) promcreatividad / magos4.size();
	cout << "Astucia: " << n1 <<endl;
	cout << "Inteligencia: " << n2 <<endl;
	cout << "Lealtad: " << n3 <<endl;
	cout << "Valentia: " << n4 <<endl;
	cout << "Creatividad: " << n5 <<endl;
	
}

void ClaseHogwarts :: imprimirporcasa(){
	cout << "GRYFFINDOR: " <<endl; 
	for (int c = 0; c < magos1.size();c++){
		MagoGryffindor* magotemp = dynamic_cast<MagoGryffindor*>(magos1 [c]);
		cout << magotemp->toString() <<endl;
	}
	cout << "SLYTHERIN: " <<endl; 
	for (int c = 0; c < magos2.size();c++){
		MagoSlytherin* magotemp = dynamic_cast<MagoSlytherin*>(magos2 [c]);
		cout << magotemp->toString() <<endl;
	}
	cout << "HUFFLEPUFF: " <<endl; 
	for (int c = 0; c < magos3.size();c++){
		MagoHufflepuff* magotemp = dynamic_cast<MagoHufflepuff*>(magos3 [c]);
		cout << magotemp->toString() <<endl;
	}
	cout << "RAVENCLAW: " <<endl; 
	for (int c = 0; c < magos4.size();c++){
		MagoRavenclaw* magotemp = dynamic_cast<MagoRavenclaw*>(magos4 [c]);
		cout << magotemp->toString() <<endl;
	}
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