#include "MagoHufflepuff.h"
#include <math.h>
#include <ctime>
#include <cmath>

MagoHufflepuff::MagoHufflepuff() : Mago(3){
	srand(time(NULL));
	lealtad = 80 + rand() % (20);
	paciencia = 80 + rand() % (20);
}

int MagoHufflepuff :: GETpaciencia(){
	return paciencia;
}

void MagoHufflepuff :: SETpaciencia(int x){
	paciencia = x;
}