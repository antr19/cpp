#include "Zombie.hpp"

int main(void)
{
    Zombie Rick("Rick");
    Rick.announce();

    int first_num = 5;
    int second_num = 6;
    Zombie* first=zombieHorde(first_num, "Rick");
    Zombie* second=zombieHorde(second_num, "Morty");

    for (int i=0; i < first_num; ++i)
        first[i].announce();

    for (int i=0; i < second_num; ++i)
        second[i].announce();

    delete [] first;
    delete [] second;

    return 0;
}