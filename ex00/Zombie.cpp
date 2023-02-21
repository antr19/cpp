#include "Zombie.hpp"

Zombie::Zombie( void )
{

}

Zombie::Zombie( const std::string& name ) : zombie_name(name)
{
    std::cout << "I am " << zombie_name << std::endl;
} 

Zombie::~Zombie( void )
{
    std::cout << zombie_name << " is dead(" << std::endl;
}

void Zombie::announce( void ) const
{
    std::cout << zombie_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
