#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include "Mago.h"
#include "MagoGryffindor.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenClaw.h"
#include "ClaseHogwarts.h"
#include <vector>

using namespace std; 

class SombreroClasificador{
	
	protected:

	
	public:
		SombreroClasificador();
		ClaseHogwarts* clasificar(vector <Mago*>, int);
		~SombreroClasificador();
};

#endif