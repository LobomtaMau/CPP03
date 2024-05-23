/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:38:21 by mbaptist          #+#    #+#             */
/*   Updated: 2024/05/23 14:40:09 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
    : ClapTrap("Diamond_clap_name"),  ScavTrap(),FragTrap(), _name("Diamond") {
    _hitPoints = FragTrap::_hitPoints; 
    _energyPoints = 50;
    _atackDmg = FragTrap::_atackDmg;
    std::cout << "DiamondTrap default constructor called.\n";
}

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name) {
    _hitPoints = FragTrap::_hitPoints; 
    _energyPoints = 50;
    _atackDmg = FragTrap::_atackDmg;
    // std::cout << _hitPoints << " " << _energyPoints << " " << _atackDmg << " = 100 50 30\n";
    std::cout << "DiamondTrap default constructor called.\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other),  ScavTrap(other), FragTrap(other), _name(other._name) {
    std::cout << "DiamondTrap copy constructor called.\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor " << _name << " called.\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        _name = other._name;
    }
    std::cout << "DiamondTrap copy assignment operator called.\n";
    return *this;
}


void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}
        
void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}