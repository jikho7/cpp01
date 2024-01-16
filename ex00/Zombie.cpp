#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout  << this->_name << " is created." << std::endl;
}

Zombie::Zombie (std::string name)
{
	this->_name = name;
	std::cout  << this->_name << " is created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout  << this->_name << " is destroyed. \u2620 " << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
