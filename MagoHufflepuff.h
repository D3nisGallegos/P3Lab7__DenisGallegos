#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H

#include "Mago.h"

class MagoHufflepuff : public Mago{
	
	protected:
	int paciencia; 
	
	public:
		MagoHufflepuff();
		int GETpaciencia();
		void SETpaciencia(int );
};

#endif