/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:17:34 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/09 10:32:40 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {

  std::string init = "HI THIS IS BRAIN";
  std::string *stringPTR = &init;
  std::string &stringREF = init;
  std::cout << "The memory address of the string variable: " << &init
            << std::endl;
  std::cout << "The memory address held by stringPTR: " << stringPTR
            << std::endl;
  std::cout << "The memory address held by stringREF: " << &stringREF
            << std::endl;
  std::cout << "The value of the string variable: " << init << std::endl;
  std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
  std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}
