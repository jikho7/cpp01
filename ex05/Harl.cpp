#include "Harl.hpp"

//void (Harl::*)();	type ptr sur fonction

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain( std::string level )
{
	const std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[])() = // type de tab : void(Harl::*)(), declaration variable : functions[]
	{
    	&Harl::debug,
    	&Harl::info,
    	&Harl::warning,
    	&Harl::error
	};
   
	for (int i = 0; i < 4; i++)
	{
		if (level == names[i])
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Argument not found" << std::endl;
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
