#include <iostream>
#include "ClapTrap.hpp"

int	main()
{
  ClapTrap a = ClapTrap("a");
  
  a.attack("enemy");
  a.beRepaired(16);
  a.takeDamage(2);
	return (0);
}
