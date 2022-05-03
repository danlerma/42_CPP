#include"ClapTrap.hpp"

int	main(void)
{
	ClapTrap	*player1 = new ClapTrap("Roger");
	ClapTrap	*player2 = new ClapTrap("Juan");

	player1->attack("Juan");
	player2->takeDamage(20);
	delete player1;
	delete player2;
	return (0);
}
