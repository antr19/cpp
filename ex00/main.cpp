#include "Zombie.hpp"

int main(void)
{
    Zombie Rick("Rick");
    Rick.announce();

    Zombie *Morty = newZombie("Morty");
    Morty->announce();

    randomChump("Summer");

    delete Morty;

    return 0;
}