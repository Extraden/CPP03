#include <iostream>
#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "A ScavTrap is created!\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {}

ScavTrap::~ScavTrap() {}
