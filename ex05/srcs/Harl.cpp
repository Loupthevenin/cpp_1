/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:39:50 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/09 16:07:20 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>

Harl::Harl() {}

void Harl::debug(void) {
  std::cout << "[DEBUG]: "
               "I love having extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-ketchup burger. I "
               "really do !"
            << std::endl;
}

void Harl::info(void) {
  std::cout << "[INFO]: "
               "I cannot believe adding extra bacon costs more money."
               "You didn’t put enough bacon in my burger!"
               "If you did, I wouldn’t be asking for more!"
            << std::endl;
}

void Harl::warning(void) {
  std::cout << "[WARNING]: "
               "I think I deserve to have some extra bacon for free."
               "I’ve been coming for years whereas you started"
               " working here since last month."
            << std::endl;
}

void Harl::error(void) {
  std::cout << "[ERROR]: "
               "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}

void Harl::complain(std::string level) {
  int i;
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning,
                                  &Harl::error};
  i = 0;
  while (i < 4) {
    if (level == levels[i]) {
      (this->*functions[i])();
      return;
    }
    i++;
  }
  std::cout << "[ Probably complaining about insignificant problems ]"
            << std::endl;
}
