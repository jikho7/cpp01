#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : _name(name), _weapon(weapon)
{
	std::cout << this->_name << " is created with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
