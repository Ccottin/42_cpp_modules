/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:59:56 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:00:00 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"

/* Constructors, destructors, operators */

FragTrap::FragTrap(void) : ClapTrap("default") {
	std::cout << "Default constructor is summoning a fearless default"
	" FragTrap " << std::endl;
	_className = "FragTrap";
	_hp = 100;
	_ep = 100;
	_dmg = 30;
	_maxHp = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Default constructor is summoning a fearless FragTrap " 
	<< name << std::endl;
	_className = "FragTrap";
	_hp = 100;
	_ep = 100;
	_dmg = 30;
	_maxHp = 100;
}

FragTrap::FragTrap(FragTrap const & c) {
	std::cout << "Copy constructor copies a fearless FragTrap" << std::endl;
	if (this != &c)
	{
		_name = c.getName();
		_hp = c.getHp();
		_ep = c.getEp();
		_dmg = c.getDmg();
		_className = c.getClassName();
		_maxHp = c._maxHp;
	}
}

FragTrap &FragTrap::operator=(FragTrap const & c) {
	std::cout << "Copy assignement constructor assigns a mighty FragTrap" 
	<< std::endl;

	if (this != &c)
	{
		_name = c.getName();
		_hp = c.getHp();
		_ep = c.getEp();
		_dmg = c.getDmg();
		_className = c.getClassName();
		_maxHp = c._maxHp;
	}
	return (*this);
}

FragTrap::~FragTrap(void) { 
	std::cout << "FragTrap Destructor Called on "
	<< getName() << ". Kick, give him a high five!" << std::endl;
}

/* Member Function */

void	FragTrap::highFivesGuys(void) {
	if (getEp() > 0 && getHp() > 0)
	{
		std::cout << _className << " " << getName() 
		<< " is firmly asking for a high Five!" << std::endl;
		_ep--;
	}
	else if (getHp() == 0)
	{
		std::cout <<  "FragTrap " << getName() 
		<< " is out of Hit Points" << std::endl;
	}
	else
		std::cout <<  "FragTrap " << getName() 
		<< " is out of energy :(" << std::endl;
}
