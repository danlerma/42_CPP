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
	//constructor
	Animal();
	Animal(std::string name);
	Animal(const Animal& obj);
	//destructor
	~Animal();
	//operators
	Animal& operator=(const Animal& obj);
	//functions
	void	makeSound();
};

#endif
