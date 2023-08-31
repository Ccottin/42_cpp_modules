/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:09:34 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 23:15:46 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default"), ScavTrap("Default"),  FragTrap("Default") {
	std::cout << "A New DiamondTrap arrives!" << std::endl;
	ClapTrap::_name += "_clap_name";
	this->_className = "DiamondTrap";
	_name = "Default";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_dmg = FragTrap::_dmg;
}


 DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) { 
 	std::cout << "A New DiamondTrap " << name << " arrives!" << std::endl;
	ClapTrap::_name += "_clap_name";
	this->_className = "DiamondTrap";
	_name = name;
 }

 DiamondTrap::~DiamondTrap(void) {
 	std::cout << "DiamondTrap " << _name << " got torn appart by his internal conflict" << std::endl;
 }

DiamondTrap::DiamondTrap(DiamondTrap const &d) {
	std::cout << "Copy constructor called to invite DiamondTrap " << d.getName() << " joining the party" << std::endl;
	if (this != &d)
	{
		_className = d.getClassName();
		_name = d.getName();
		ClapTrap::_name = ClapTrap::_name;
	}
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &d) {
	std::cout << "Copy operator called to copies " << d.getName() << " into a clone of himself, creating "
	"even more trusts issues" << std::endl;
	if (this != &d)
	{
		_className = d.getClassName();
		_name = d.getName();
		ClapTrap::_name += "_clap_name";
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "My DiamondClap self knows myself as " << _name << ", also deep below I feel my "
	"name is " << ClapTrap::_name << " , therefore I got no idea who the hell is speaking now" << std::endl;
}

std::string const	DiamondTrap::getName(void) const {
	return (_name);
}
	
std::string const	DiamondTrap::getClassName(void) const {
	return (_className);
}
int			DiamondTrap::getDmg(void) const {
	return (_dmg);
}
