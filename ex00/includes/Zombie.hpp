/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:25:12 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/08 18:15:49 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
private:
  std::string name;

public:
  Zombie(std::string name);
  void announce(void);
  ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
