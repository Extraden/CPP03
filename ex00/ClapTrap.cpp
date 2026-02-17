#include <iostream>
#include <limits>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hp(10), _ep(10), _damage(0)
{
  std::cout << "ClapTrap " << _name << " is created!\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hp(other._hp), _ep(other._ep), _damage(other._damage)
{
  std::cout << "ClapTrap copy constructor is called!\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
  if (this != &other)
  {
    this->_name = other._name;
    this->_hp = other._hp;
    this->_ep = other._ep;
    this->_damage = other._damage;
    std::cout << "ClapTrap assignment operator is called!\n";
  }
  return (*this);
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << _name << " is destroyed!\n";
}

void  ClapTrap::attack(const std::string& target)
{
  if (this->_hp == 0)
  {
    std::cout << "ClapTrap " << this->_name << " is dead and can't attack!\n";
    return;
  }
  if (this->_ep == 0)
  {
    std::cout << "ClapTrap " << this->_name
      << " doesn't have enough energy to attack " << target << "!\n";
    return;
  }
  this->_ep--;
  std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
    << this->_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_hp == 0)
  {
    std::cout << "ClapTrap " << this->_name << " is already dead!\n";
    return;
  }
  const std::size_t dmg = static_cast<std::size_t>(amount);
  std::cout << "ClapTrap " << this->_name << " takes " << dmg << " damage!\n";
  if (this->_hp >= dmg)
    this->_hp -= dmg;
  else
   this->_hp = 0;
  if (this->_hp == 0)
    std::cout << "ClapTrap " << this->_name << " is dead!\n";
  else
   std::cout << "ClapTrap " << this->_name << " has " << this->_hp << " hp left\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
  static const std::size_t max = std::numeric_limits<std::size_t>::max();
  if (this->_hp == 0)
  {
    std::cout << "ClapTrap " << this->_name << " is dead and can't be repaired!\n";
    return;
  }
  if (this->_ep == 0)
  {
    std::cout << "ClapTrap " << this->_name << " doesn't have energy and can't be repaired!\n";
    return;
  }
  const std::size_t delta = static_cast<std::size_t>(amount);
  if (this->_hp > max - delta)
    this->_hp = max;
  else
    this->_hp += delta;
  this->_ep--;
  std::cout << "ClapTrap " << this->_name << " is repaired by " << delta << " hit points\n";
}
