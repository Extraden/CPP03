#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hp(10), _ep(10), _damage(0)
{
  std::cout << "ClapTrap is created!\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
  *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
  if (this != &other)
  {
    this->_name = other._name;
    this->_hp = other._hp;
    this->_ep = other._ep;
    this->_damage = other._damage;
  }
  return (*this);
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap is destroyed!\n";
}

void  ClapTrap::attack(const std::string& target)
{
  std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!\n";
}
