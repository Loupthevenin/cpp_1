/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:15:52 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/09 10:12:25 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

int main(void) {
  Zombie *horde;
  int i;
  int n;

  i = 0;
  n = 100;
  std::cout << "Create horde:" << std::endl;
  horde = zombieHorde(n, "grrrrrrrZZzzZZ");
  while (i < n) {
    horde[i].announce();
    i++;
  }
  delete[] horde;
}
