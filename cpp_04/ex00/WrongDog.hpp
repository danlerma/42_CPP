#ifndef WRONGDOG_H

# define WRONGDOG_H
# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	//constructor
	WrongDog();
	WrongDog(std::string name);
	WrongDog(const WrongDog& obj);
	//destructor
	~WrongDog();
	//operators
	WrongDog& operator=(const WrongDog& obj);
	//functions
	void	makeSound() const;
};

#endif