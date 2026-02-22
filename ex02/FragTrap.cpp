#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") 
{
  _hp = 100;
  _ep = 100;
  _damage = 30;
	std::cout << "A FragTrap " << _name << " is created!\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
  _hp = 100;
  _ep = 100;
  _damage = 30;
	std::cout << "A FragTrap " << _name << " is created!\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
  if (this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << _name << " is destroyed!\n";
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "FragTrap " << _name << " gives high five!\n";
}
