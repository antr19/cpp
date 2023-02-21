#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
    Zombie ( const std::string& name );
    ~Zombie ( void );

    void announce( void ) const;

    private:

    Zombie( void );
    std::string zombie_name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif