/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:04:57 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 15:08:16 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_Weapon = NULL;
}

HumanB::~HumanB(void) { 
}

void	HumanB::attack(void) {
	if (!this->_Weapon)
		std::cout << this->_name << " attacks" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}
void	HumanB::setWeapon(Weapon & Weapon) {
	this->_Weapon = &Weapon;
}
