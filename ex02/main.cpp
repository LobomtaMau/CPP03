#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap claptrap1("Clap-001");
    ClapTrap claptrap2("Clap-002");

    ScavTrap scavtrap1("Scav-111");
    ScavTrap scavtrap2("Scav-112");

    FragTrap fragtrap1("Frag-881");
    FragTrap fragtrap2("Frag-882");

    std::cout << std::endl;
    claptrap1.attack("Clap-002");
    scavtrap1.attack("Scav-112");
    fragtrap1.attack("Frag-882");

    std::cout << std::endl;
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);

    scavtrap2.takeDamage(20);
    scavtrap2.beRepaired(10);
    fragtrap2.takeDamage(30);
    fragtrap2.beRepaired(20);

    std::cout << std::endl;
    scavtrap2.guardGate();
    fragtrap2.highFivesGuys();
    std::cout << "... Scav-112 says WTF!?!\n\n";

    return 0;
}

