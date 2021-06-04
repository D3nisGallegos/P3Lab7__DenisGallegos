#ifndef MAGO_H
#define MAGO_H
#include <string>

using namespace std; 

class Mago{
	
	protected:
	int astucia; 
	int inteligencia; 
	int lealtad; 
	int valentia;
	
	public:
		Mago(int );
		int GETastucia();
		int GETinteligencia();
		int GETlealtad();
		int GETvalentia();
		void SETastucia(int);
		void SETinteligencia(int);
		void SETlealtad(int);
		void SETvalentia(int);
		virtual string toString();
};

#endif