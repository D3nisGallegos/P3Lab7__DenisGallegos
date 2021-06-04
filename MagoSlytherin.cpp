#include "MagoSlytherin.h"
#include <math.h>
#include <ctime>
#include <cmath>

MagoSlytherin::MagoSlytherin() : Mago(2){
	srand(time(NULL));
	astucia = 80 + rand() % (20);
	liderazgo = 80 + rand() % (20);
}

int MagoSlytherin :: GETliderazgo(){
	return liderazgo;
}

void MagoSlytherin :: SETliderazgo(int x){
	liderazgo = x;
}