#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
/*
int main()
{
	// {
	// 	Weapon *w2 = new Weapon("FX weapon");

	// 	Weapon club = Weapon("crude spiked club");
	// 	HumanA bob("Bob", *w2);
	// 	bob.attack();
	// 	w2->setType("some other type of club");
	// 	bob.attack();
	// }
	// std::cout << std::endl;
	{

		Weapon w = Weapon ("prout");
		Weapon & ref_w = w;

		std::cout << &w << " " << &ref_w << std::endl;

		ref_w.setType("Julie");

		std::cout << w.getType() << std::endl;
		//std::cout << w << " " << ref_w << std::endl;


		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

*/
