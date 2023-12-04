#ifndef WRONGCAT_H

# define WRONGCAT_H
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	//constructor
	WrongCat();
	WrongCat(std::string name);
	WrongCat(const WrongCat& obj);
	//destructor
	~WrongCat();
	//operators
	WrongCat& operator=(const WrongCat& obj);
	//functions
	void	makeSound() const;
};

#endif