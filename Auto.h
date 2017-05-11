#ifndef AUTO
#define AUTO
#include <string>

using namespace std;

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
		void SetMarca(string _marca)
		{
			marca = _marca;
		}
};

#endif
