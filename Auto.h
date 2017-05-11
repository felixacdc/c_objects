#ifndef AUTO
#define AUTO
#include <string.h>

class Auto {
	//Atributos
	private: 
		float velocidad;
		int numeroDeVueltas;
		string marca;
	
	public:
		void Pitar();
		float Acelerar();
		float Frenar();
		void RecibirPasajeros(int nroPasejeros);
};

#endif
