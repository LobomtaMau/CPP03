/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:54:48 by mbaptist          #+#    #+#             */
/*   Updated: 2024/05/21 14:22:20 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hitPoints = 100, _energyPoints = 50, _atackDmg = 20;
    std::cout << "ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100, _energyPoints = 50, _atackDmg = 20;
    std::cout << "ScavTrap Constructor " << _name << " called\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap Copy constructor called\n";
}
        
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor " << _name << " called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap Assignation operator called\n";
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if(this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " 
                  << _atackDmg << " points of damage!\n";
    } else
        std::cout << "ScavTrap " << this->_name << " can't attack, no energy or hit points left.\n";
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode.\n";
}