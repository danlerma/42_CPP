#ifndef ANIMAL_H

# define ANIMAL_H
# include <string>
# include <iostream>
# include <fstream>

using	std::cout;
using	std::endl;

class Animal
{
protected:
	std::string type;
public:
	Animal(/* args */);
	~Animal();
};


#endif
