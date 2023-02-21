#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon ( const std::string& name );

        const std::string& getType( void ) const;
        void setType(const std::string& weapon_type);
    
    private:
        std::string weapon_name;

};


#endif