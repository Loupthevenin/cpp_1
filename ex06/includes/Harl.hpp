/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:39:42 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/14 11:43:54 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

public:
  Harl();
  void complain(std::string level);
};

#endif
