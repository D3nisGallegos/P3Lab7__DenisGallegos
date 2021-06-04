#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include <string>
#include "Mago.h"

class MagoGryffindor : public Mago{
	
	protected:
	int atrevimineto; 
	
	
	public:
		MagoGryffindor();
		int GETatrevimiento();
		void SETatrevimiento(int );
		virtual string toString();
};

#endif