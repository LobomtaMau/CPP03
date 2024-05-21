/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:38:21 by mbaptist          #+#    #+#             */
/*   Updated: 2024/05/21 16:17:28 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_clap_name"), FragTrap(), ScavTrap(), _name("Diamond") {
    _hitPoints = FragTrap::_hitPoints; 
    _energyPoints = ScavTrap::_energyPoints;
    _atackDmg = FragTrap::_hitPoints;
    std::cout << "DiamondTrap default constructor called.\n";
}

// DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name) {
//     _hitPoints = FragTrap::_hitPoints; 
//     _energyPoints = ScavTrap::_energyPoints;
//     _atackDmg = FragTrap::_hitPoints;
//     std::cout << "DiamondTrap default constructor called.\n";
// }




DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor " << _name << " called\n";
}

        // DiamondTrap(const DiamondTrap &other);
        // ~DiamondTrap();

        // DiamondTrap &operator=(const DiamondTrap &other);

        // void attack(const std::string &target);
        
        // void whoAmI();