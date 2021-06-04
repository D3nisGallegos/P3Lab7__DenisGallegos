#include "MagoHufflepuff.h"
#include <math.h>
#include <ctime>
#include <cmath>

MagoHufflepuff::MagoHufflepuff() : Mago(3){
	
	lealtad = 80 + rand() % (20);
	paciencia = 80 + rand() % (20);
}

int MagoHufflepuff :: GETpaciencia(){
	return paciencia;
}

void MagoHufflepuff :: SETpaciencia(int x){
	paciencia = x;
}

string MagoHufflepuff :: toString(){
	return "Astucia: "+to_string(astucia)+" Inteligencia: "+to_string(inteligencia)+" Lealtad: "+to_string(lealtad)
	+" Valentia: "+to_string(valentia)+" Paciencia: "+to_string(paciencia);
}