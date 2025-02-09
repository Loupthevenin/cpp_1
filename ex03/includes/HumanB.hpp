/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:09:58 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/09 11:49:44 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
private:
  std::string name;
  Weapon *weapon;

public:
  HumanB(std::string name);
  void setWeapon(Weapon &weapon);
  void attack();
};
