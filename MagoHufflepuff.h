#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include <string>
#include "Mago.h"

using namespace std; 

class MagoHufflepuff : public Mago{
	
	protected:
	int paciencia; 
	
	public:
		MagoHufflepuff();
		int GETpaciencia();
		void SETpaciencia(int );
		virtual string toString();
};

#endif