#include "Zombie.hpp"

int main()
{
	Zombie *z1; // heap
	z1 = new Zombie();
	Zombie z3 = Zombie(); // stack

	z1 = z1->newZombie("Heap zombie");
	z1->announce();
	z3.randomChump("Stack zombie");
	delete z1;
	return (0);
}
