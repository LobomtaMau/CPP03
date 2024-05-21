#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap dt("DiamondOne");

    dt.attack("target");
    dt.takeDamage(20);
    dt.beRepaired(10);
    dt.highFivesGuys();
    dt.guardGate();
    dt.whoAmI();

    return 0;
}