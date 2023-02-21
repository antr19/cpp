#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
    Zombie( void );
    Zombie ( const std::string& name );
    ~Zombie ( void );

    void SetZombieName( const std::string& name );
    void announce( void ) const;

    private:

    std::string zombie_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif