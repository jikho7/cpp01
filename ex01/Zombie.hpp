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
		void setName( std::string name );

	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
