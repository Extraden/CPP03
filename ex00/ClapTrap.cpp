#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hp(10), _ep(10), _damage(0)
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
  if (this->_ep > 0)
  {
    this->_ep--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!\n";
  }
  else
    std::cout << "ClapTrap " << this->_name << " doesn't have enough energy to attack " << target << "!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_hp > 0)
    this->_hp--;
  std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
  std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " hit points\n";
}
