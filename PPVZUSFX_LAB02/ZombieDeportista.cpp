
#include "ZombieDeportista.h"

void ZombieDeportista::correr()
{
	direccionX = 1;
	for (int i = 0; i < 20; i++)
	{
		posicionX += direccionX * velocidad;
	}
}
void ZombieDeportista::saltar()
{
	direccionY = 1;
	for (int i = 0; i < 10; i++)
	{
		posicionY += direccionY * velocidad;
	}
}
