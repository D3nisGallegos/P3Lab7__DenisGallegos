#include "MagoGryffindor.h"
#include <math.h>
#include <ctime>
#include <cmath>


MagoGryffindor::MagoGryffindor() : Mago(1){
	srand(time(NULL));
	valentia = 80 + rand() % (20);
	atrevimineto = 80 + rand() % (20);
}

int MagoGryffindor :: GETatrevimiento(){
	return atrevimineto;
}

void MagoGryffindor :: SETatrevimiento(int x){
	atrevimineto = x;
}