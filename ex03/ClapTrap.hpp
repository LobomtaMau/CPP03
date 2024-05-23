/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:16:16 by mbaptist          #+#    #+#             */
/*   Updated: 2024/05/23 14:36:14 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _atackDmg;
        
    public:
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &other);
        virtual ~ClapTrap();

        ClapTrap &operator=(const ClapTrap &other);

        virtual void attack(const std::string &target);
        
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif

        // int shadow1;
        // ClapTrap(int value) : shadow1(value) {}
        // void print() {
        //     int shadow1 = 10;
        //     std::cout << "Local shadow1: " << shadow1 << std::endl;
        //     std::cout << "shadow1 variable: " << this->shadow1 << std::endl;
        // }


/* Members classification:

Public members = are accessible from any part of the program.
Protected members = are accessible within the class and by derived classes, but not by other parts of the program.
Private members = are only accessible within the class itself, ensuring a high level of encapsulation.
*/

/* Virtual Keyword:

Polymorphism: The ability to call derived class methods through a base class reference or pointer.
This allows for more flexible and reusable code.

Overriding: When a derived class provides a specific implementation of a virtual function defined in its base class.

Dynamic Binding: At runtime, the function to be invoked is determined based on the object type, not the pointer type.
This contrasts with static binding, where the function is determined at compile-time.
*/