#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include <string>
#include "Mago.h"

using namespace std; 

class MagoSlytherin : public Mago{
	
	protected:
	int liderazgo;
	
	
	public:
		MagoSlytherin();
		int GETliderazgo();
		void SETliderazgo(int );
		virtual string toString();
};

#endif