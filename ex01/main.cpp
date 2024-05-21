#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap1("Clap-001");
    ClapTrap claptrap2("Clap-002");

    ScavTrap scavtrap1("Scav-111");
    ScavTrap scavtrap2("Scav-112");

    std::cout << std::endl;
    claptrap1.attack("Clap-002");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);

    std::cout << std::endl;
    scavtrap1.attack("Scav-112");
    scavtrap2.takeDamage(20);

    scavtrap2.beRepaired(10);

    std::cout << std::endl;
    scavtrap2.guardGate();
    
    std::cout << std::endl;

    return 0;
}