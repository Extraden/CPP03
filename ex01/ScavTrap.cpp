#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default") 
{
  _hp = 100;
  _ep = 50;
  _damage = 20;
	std::cout << "A ScavTrap " << _name << " is created!\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
  _hp = 100;
  _ep = 50;
  _damage = 20;
	std::cout << "A ScavTrap " << _name << " is created!\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {}

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

void  ScavTrap::attack(const std::string& target)
{
  if (this->_hp == 0)
  {
    std::cout << "ScavTrap " << this->_name << " is dead and can't attack!\n";
    return;
  }
  if (this->_ep == 0)
  {
    std::cout << "ScavTrap " << this->_name
      << " doesn't have enough energy to attack " << target << "!\n";
    return;
  }
  this->_ep--;
  std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
    << this->_damage << " points of damage!\n";
}

void  ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!\n";
}

