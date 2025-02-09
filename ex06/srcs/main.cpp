/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:40:05 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/09 15:36:25 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv) {
  Harl harl;
  if (argc == 2)
    harl.complain(argv[1]);
  else
    harl.complain("dskjfsjhhsadhshaldas;fksaaflsfsjdlk");
  return 0;
}
