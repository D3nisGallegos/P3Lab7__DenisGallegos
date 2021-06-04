#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include <string>
#include "Mago.h"

using namespace std; 

class MagoRavenclaw : public Mago{
	
	protected:
	int creatividad; 
	
	public:
		MagoRavenclaw();
		int GETcreatividad();
		void SETcreatividad(int );
		string toString();
};

#endif