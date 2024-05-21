#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    _hitPoints = 100, _energyPoints = 100, _atackDmg = 30;
    std::cout << "ClapTrap Default constructor called\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
     _hitPoints = 100, _energyPoints = 100, _atackDmg = 30;
    std::cout << "FragTrap Constructor " << _name << " called\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    _hitPoints = 100, _energyPoints = 100, _atackDmg = 30;
    std::cout << "FragTrap copy Constructor " << _name << " called\n";
}
FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor " << _name << " called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap Assignation operator called\n";
    return *this;
}

void FragTrap::attack(const std::string &target) {
        if(this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_energyPoints--;
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " 
                  << _atackDmg << " points of damage!\n";
    } else
        std::cout << "FragTrap " << _name << " can't attack, no energy or hit points left.\n";
}


 void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requested HI FIVE!\n";
 }