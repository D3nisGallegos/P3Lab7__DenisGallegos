#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include "Mago.h"
#include "MagoGryffindor.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenClaw.h"
#include <vector>

using namespace std; 

class ClaseHogwarts{
	
	protected:
	int promocion; 
	vector <MagoGryffindor* > magos1; 
	vector <MagoSlytherin*> magos2; 
	vector <MagoHufflepuff*> magos3; 
	vector <MagoRavenclaw* > magos4; 
	
	public:
		ClaseHogwarts();
		ClaseHogwarts(vector <MagoGryffindor*>, vector <MagoSlytherin*>, vector <MagoHufflepuff*>, vector <MagoRavenclaw*>, int );
		int GETpromocion();
		void SETpromocion(int );
		
		~ClaseHogwarts();
};

#endif