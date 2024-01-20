#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string fileName = av[1];
		std::string toFind = av[2];
		std::string replaceWith = av[3];
		std::ostringstream content;
		std::string outputFileName = fileName + ".replace";

		if (toFind == replaceWith)
			return (1);
		std::ifstream file(fileName);
		if (!file.is_open())
		{
			std::cerr << "Can't open file." << std::endl;
			return (1);
		}
		content << file.rdbuf();
		file.close();

		std::string str = content.str(); // met contenu de content dans string
		size_t position = str.find(toFind);
		while (position != std::string::npos) // lecture de la string
		{
			str.erase(position, toFind.length());
			str.insert(position, replaceWith);
			position = str.find(toFind, position + replaceWith.length()); // deplacer la position de recherche pour eviter de boucler
		}

		std::ofstream output(outputFileName); // creation fichier de sortie
		if (!output.is_open()) {
			std::cerr << "Erreur : Impossible de créer le fichier " << str + ".replace" << std::endl;
			return (1);
		}
		output << str;
		output.close();
	}
	else
		std::cout << "Invalid number of arguments." << std::endl;
	return 0;
}

/*
	std::string::find
	insert	Insert into string (public member function)
	erase	Erase characters from string (public member function)


	std::string::npos
	This value, when used as the value for a len (or sublen) parameter in string's member functions, means "until the end of the string".

	As a return value, it is usually used to indicate no matches.
*/
