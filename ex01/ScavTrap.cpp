#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), _name("Default"), _hp(100), _ep(50), _damage(20)
{
	std::cout << "A ScavTrap is created!\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap " << _name << " is destroyed!\n";
}
