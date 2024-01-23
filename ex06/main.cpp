#include "Harl.hpp"

//	void (Harl::* ptrMemberFt)(std::string) = &Harl::complain;
//	(harl.*ptrMemberFt)(av[1]);

int main(int ac, char**av)
{
	Harl harl;

	if (ac > 1)
		harl.complain(av[1]);
	else
		std::cout << "No argument" << std::endl;
	return (0);
}
