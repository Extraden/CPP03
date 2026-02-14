#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap();
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

	private:
    std::string _name;
    std::size_t _hp;
    std::size_t _ep;
    std::size_t _damage;
};

#endif
