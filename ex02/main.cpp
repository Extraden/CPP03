#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()

{
  ScavTrap a("a");

  a.attack("enemy");
  a.beRepaired(15);
  a.takeDamage(4);
  a.takeDamage(20);
  a.guardGate();

  ClapTrap b("b");

  b.attack("somebody");
  b.takeDamage(200);
  b.beRepaired(10);
	return (0);
}
