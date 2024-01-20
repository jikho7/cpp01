#include "Harl.hpp"

int main ()
{
	std::string choice;
	Harl harl;

	void (Harl::* ptrMemberFt)(std::string) = &Harl::complain;
	std::cout << "Enter un level : DEBUG " << "\n" << " INFO" << "\n" << "WARNING" << "\n" << "ERROR" << std::endl;
	std::cin >> choice;

	(harl.*ptrMemberFt)(choice);
	return (0);
}
