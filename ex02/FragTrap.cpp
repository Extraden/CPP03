#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") 
{
  _hp = 100;
  _ep = 100;
  _damage = 30;
	std::cout << "FragTrap " << _name << " is created!\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
  _hp = 100;
  _ep = 100;
  _damage = 30;
	std::cout << "FragTrap " << _name << " is created!\n";
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

void  FragTrap::attack(const std::string& target)
{
  if (this->_hp == 0)
  {
    std::cout << "FragTrap " << this->_name << " is dead and can't attack!\n";
    return;
  }
  if (this->_ep == 0)
  {
    std::cout << "FragTrap " << this->_name
      << " doesn't have enough energy to attack " << target << "!\n";
    return;
  }
  this->_ep--;
  std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
    << this->_damage << " points of damage!\n";
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "FragTrap " << _name << " gives high five!\n";
}
