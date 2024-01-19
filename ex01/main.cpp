#include "Zombie.hpp"

int main()
{
	Zombie* horde = NULL;
	int numberOfZombies = 23;

	horde = zombieHorde(numberOfZombies , "Plop");
	for (int i = 0 ; i < numberOfZombies ; i ++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
