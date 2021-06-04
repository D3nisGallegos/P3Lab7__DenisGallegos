#include "SombreroClasificador.h"
#include <typeinfo>
using std::type_info;

SombreroClasificador::SombreroClasificador(){
	
}

ClaseHogwarts* SombreroClasificador :: clasificar(vector <Mago*> magosnuevos, int promocion){
	vector <MagoGryffindor*> magos1; 
	vector <MagoSlytherin*> magos2; 
	vector <MagoHufflepuff*> magos3; 
	vector <MagoRavenclaw* > magos4; 
	for (int c = 0; c < magosnuevos.size();c++){
		if(typeid( *magosnuevos[c] ) == typeid(MagoGryffindor)){
			MagoGryffindor* magotemp = dynamic_cast<MagoGryffindor*>(magosnuevos[c]);
			magos1.push_back(magotemp);
		}else if(typeid( *magosnuevos[c] ) == typeid(MagoSlytherin)){
			MagoSlytherin* magotemp = dynamic_cast<MagoSlytherin*>(magosnuevos[c]);
			magos2.push_back(magotemp);
		}else if(typeid( *magosnuevos[c] ) == typeid(MagoHufflepuff)){
			MagoHufflepuff* magotemp = dynamic_cast<MagoHufflepuff*>(magosnuevos[c]);
			magos3.push_back(magotemp);
		}else if(typeid( *magosnuevos[c] ) == typeid(MagoRavenclaw)){
			MagoRavenclaw* magotemp = dynamic_cast<MagoRavenclaw*>(magosnuevos[c]);
			magos4.push_back(magotemp);
		}
	}
	ClaseHogwarts* objeto = new ClaseHogwarts(magos1, magos2, magos3, magos4, 2021);
	return objeto;
}

SombreroClasificador::~SombreroClasificador(){

}