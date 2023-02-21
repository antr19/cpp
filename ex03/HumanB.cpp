#include "HumanB.hpp"

HumanB::HumanB( const std::string& name )
  : human_weapon(NULL), human_name(name) {
}

void  HumanB::setWeapon( Weapon& new_weapon ) {
  human_weapon = &new_weapon;
}

void  HumanB::attack( void ) {
  if (human_weapon) {
    std::cout << human_name << " attacks with his "
              << (*human_weapon).getType() << std::endl;
  }
  else {
    std::cout << human_name << " is disarmed" << std::endl;
  }
}
