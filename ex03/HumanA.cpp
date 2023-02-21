#include "HumanA.hpp"

HumanA::HumanA( const std::string& name, Weapon& weapon )
  : human_weapon(weapon), human_name(name) {
}

void  HumanA::setWeapon( const Weapon& new_weapon) {
  human_weapon = new_weapon;
}

void  HumanA::attack( void ) {
  std::cout << human_name << " attacks with his "
            << human_weapon.getType() << std::endl;
}