#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H

#include "Mago.h"

class MagoSlytherin : public Mago{
	
	protected:
	int liderazgo;
	
	
	public:
		MagoSlytherin();
		int GETliderazgo();
		void SETliderazgo(int );
};

#endif