#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()

{
  ScavTrap a;

  a.attack("enemy");
  a.beRepaired(15);
  a.takeDamage(4);
  a.takeDamage(20);

  ClapTrap(b);

  b.attack("somebody");
  b.takeDamage(200);
  b.beRepaired(10);
	return (0);
}
