/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:16:08 by mbaptist          #+#    #+#             */
/*   Updated: 2024/05/23 14:44:09 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("default"), _hitPoints(10), _energyPoints(10), _atackDmg(0) {
    std::cout << "ClapTrap Default Constructor created.\n";
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _atackDmg(0) {
    std::cout << "ClapTrap Constructor " << this->_name << " has been created.\n";
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    *this = other;
    std::cout << "ClapTrap Constructor " << this->_name << " has been copied.\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor " << this->_name << " has been destroyed.\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if(this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_atackDmg = other._atackDmg;
    }
    std::cout << "ClapTrap Operator " << this->_name << " has been assigned.\n";
    return *this;
}

void ClapTrap::attack(const std::string &target) {
    if(this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " 
                  << _atackDmg << " points of damage!\n";
    } else
        std::cout << "ClapTrap " << this->_name << " can't attack, no energy or hit points left.\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    if(this->_hitPoints > 0) {
        this->_hitPoints -= amount;
        if(this->_hitPoints < 0) this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!\n";
    } else
        std::cout << "ClapTrap " << this->_name << " is already at 0 hit points.\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(this->_energyPoints > 0 && this->_hitPoints > 0 && static_cast<int>(amount) <= this->_energyPoints ) {
        this->_energyPoints--;
        this->_hitPoints+= amount;
        std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " hit points!\n";
    } else
        std::cout << "ClapTrap " << this->_name << " can't be repaired, no energy or hit points left.\n";
}

