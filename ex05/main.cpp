#include "Harl.hpp"

//	void (Harl::* ptrMemberFt)(std::string) = &Harl::complain;
//	(harl.*ptrMemberFt)(av[1]);

int main(int ac, char**av)
{
	(void)ac;
	Harl harl;

	harl.complain(av[1]);
	return (0);
}
