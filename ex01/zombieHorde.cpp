#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];
    if (!zombies)
        exit(1);
    
    for (int i = 0; i < N; ++i)
        zombies[i].SetZombieName(name);
    
    return zombies;
}