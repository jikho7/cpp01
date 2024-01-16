#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie	randZombie(name);
	randZombie.announce();
}