#include "MagoGryffindor.h"
#include <math.h>
#include <ctime>
#include <cmath>


MagoGryffindor::MagoGryffindor() : Mago(1){
	valentia = 80 + rand() % (20);
	atrevimineto = 80 + rand() % (20);
}

int MagoGryffindor :: GETatrevimiento(){
	return atrevimineto;
}

void MagoGryffindor :: SETatrevimiento(int x){
	atrevimineto = x;
}

string MagoGryffindor :: toString(){
	return "Astucia: "+to_string(astucia)+" Inteligencia: "+to_string(inteligencia)+" Lealtad: "+to_string(lealtad)
	+" Valentia: "+to_string(valentia)+" Atrevimiento: "+to_string(atrevimineto);
}