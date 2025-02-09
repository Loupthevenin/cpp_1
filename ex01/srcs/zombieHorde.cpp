/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:25:55 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/09 10:11:13 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  int i;
  Zombie *horde;

  if (N < 1)
    return NULL;
  horde = new Zombie[N];
  if (!horde)
    return NULL;
  i = 0;
  while (i < N) {
    horde[i].setName(name);
    i++;
  }
  return horde;
}
