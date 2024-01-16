#include "Zombie.hpp"

int main()
{
	Zombie *zombieHeap;

	zombieHeap = newZombie("zombie Heap");
	zombieHeap->announce();
	delete zombieHeap;

	randomChump("zombie Stack");

	return (0);
}


