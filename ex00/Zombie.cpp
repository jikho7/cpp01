#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

Zombie::Zombie()
{
	std::cout << "Created" << this->_name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroyed Name: " << this->_name << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie ( std::string name)
{
	//Zombie* newZombie = NULL;
	this->_name = name;
	return (this);
}

void Zombie::randomChump( std::string name)
{
	//Zombie rand;
	//this->_name = name;
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	;
}
