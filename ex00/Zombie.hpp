#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <ios>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void );

	private:
		std::string _name;
};

Zombie*	newZombie ( std::string name);
void	randomChump( std::string name);

#endif