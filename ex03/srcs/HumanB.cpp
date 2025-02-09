/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:10:06 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/09 12:01:29 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {};

void HumanB::setWeapon(Weapon &newWeapon) { weapon = &newWeapon; }

void HumanB::attack() {
  if (weapon)
    std::cout << name << " attacks with their " << weapon->getType()
              << std::endl;
  else
    std::cout << name << " has no weapon to attack !" << std::endl;
}
