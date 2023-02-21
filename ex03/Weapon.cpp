#include "Weapon.hpp"

Weapon::Weapon( const std::string& weapon ) : weapon_name(weapon) {
}

const std::string& Weapon::getType( void ) const {
  return (weapon_name);
}

void Weapon::setType( const std::string& weapon_type ) {
  weapon_name = weapon_type;
}
