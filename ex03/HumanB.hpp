#ifndef HUMANB_H
#define HUMANB_H

// ptr
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon & weapon);

	private:
		std::string _name;
		Weapon * _weapon;
};

#endif
