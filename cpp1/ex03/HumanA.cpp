/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:04:48 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 15:08:16 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon):_Weapon(weapon) {
	this->_name = name;
	this->_Weapon = weapon;
}

HumanA::~HumanA(void) { 
}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
