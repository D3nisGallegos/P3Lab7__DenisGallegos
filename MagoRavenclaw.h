#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H

#include "Mago.h"

class MagoRavenclaw : public Mago{
	
	protected:
	int creatividad; 
	
	public:
		MagoRavenclaw();
		int GETcreatividad();
		void SETcreatividad(int );
};

#endif