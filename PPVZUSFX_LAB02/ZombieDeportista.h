
#include "Zombie.h"
class ZombieDeportista :
    public Zombie
{
    int nivelAgilidad = 10;
public:
	//Contructores
	ZombieDeportista() {};
	ZombieDeportista(string _nombre) : Zombie(_nombre) {};

	//Metodos accesores
	int getNivelAgilidad() { return nivelAgilidad; }
	void setNivelAgilidad(int _nivelAgilidad) { nivelAgilidad = _nivelAgilidad; }

	//Metodos propios
	void correr();
	void saltar();
};
