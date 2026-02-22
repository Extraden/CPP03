#include "FragTrap.hpp"

int	main()

{
  FragTrap a("a");

  a.attack("enemy");
  a.beRepaired(15);
  a.takeDamage(4);
  a.takeDamage(20);
  a.highFivesGuys();
	return (0);
}
