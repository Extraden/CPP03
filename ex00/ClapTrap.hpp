#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	public:
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
	private:
    std::string _name;
    std::size_t _hp;
    std::size_t _ep;
    std::size_t _damage;

    void  attack(const std::string& target);
};

#endif
