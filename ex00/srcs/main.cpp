/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:34:23 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/08 18:15:54 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

int main(void) {
  Zombie *heapZombie;
  std::cout << "Create Zombie on stack :" << std::endl;
  randomChump("StackZombie");

  std::cout << "\nCreate Zombie on heap: " << std::endl;
  heapZombie = newZombie("HeapZombie");
  heapZombie->announce();
  delete heapZombie;
  return 0;
}
