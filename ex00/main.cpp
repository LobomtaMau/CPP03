#include "ClapTrap.hpp"

int main() {
    ClapTrap b("BLUE");
    ClapTrap r("RED");
    ClapTrap p;
    
    std::cout << "\nRound 1, Fight...\n";
    b.attack("RED");
    r.takeDamage(5);

    r.attack("BLUE");

    b.takeDamage(5);

    p.beRepaired(11);
    r.beRepaired(3);

    b.attack("RED");
    r.takeDamage(5);

    r.beRepaired(2);
    r.attack("BLUE");

    b.takeDamage(5);

    b.beRepaired(1);
    std::cout << "Finish Him...\n";

    return 0;
}

