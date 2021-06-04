#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H

#include "Mago.h"

class MagoGryffindor : public Mago{
	
	protected:
	int atrevimineto; 
	
	
	public:
		MagoGryffindor();
		int GETatrevimiento();
		void SETatrevimiento(int );
};

#endif