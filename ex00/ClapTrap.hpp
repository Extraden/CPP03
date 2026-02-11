#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <cstddef>

class ClapTrap
{
	public:
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

    void  attack(const std::string& target);
    void  takeDamage(unsigned int amount);
    void  beRepaired(unsigned int amount);

	private:
    std::string _name;
    std::size_t _hp;
    std::size_t _ep;
    std::size_t _damage;
};

#endif
