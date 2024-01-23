#include "Harl.hpp"

//void (Harl::*)();	type ptr sur fonction

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain( std::string level )
{
	int i = 0;
	std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (!(names[i]).compare(level))
			break;
	}
	if (i == 4)
	{
		std::cout << "Argument not valid" << std::endl; 
		return;
	}
	for (i = i; i < 4; i++)
	{
		switch(i)
		{
			case 0:
				this->Harl::debug();
				break;
			case 1:
				this->Harl::info();
				break;
			case 2:
				this->Harl::warning();
				break;
			case 3:
				this->Harl::error();
				break;
		}
	}
}


void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
} 

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
