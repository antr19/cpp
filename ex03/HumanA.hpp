#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:

        HumanA ( const std::string& name, Weapon& weapon_name );
        void setWeapon ( const Weapon& new_weapon );
        void attack( void );
    
    private:
        Weapon& human_weapon;
        std::string human_name;
};



#endif