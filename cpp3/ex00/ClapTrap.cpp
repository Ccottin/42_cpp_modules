/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:06:49 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:07:13 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

/* Constructors, destructors, operators */

ClapTrap::ClapTrap(void) : _name("default"), _hp(10), _ep(10), _dmg(0) {
	std::cout << "Default constructor is summoning a default"
	" ClapTrap " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _dmg(0) {
	std::cout << "Default constructor is summoning ClapTrap " 
	<< name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & c) {
	std::cout << "Copy constructor ClapTrap Called" << std::endl;
	if (this != &c)
	{
		this->_name = c.getName();
		this->_hp = c.getHp();
		this->_ep = c.getEp();
		this->_dmg = c.getDmg();
	}
}

ClapTrap &ClapTrap::operator=(ClapTrap const & c) {
	std::cout << "Copy assignement constructor ClapTrap Called" 
	<< std::endl;

	if (this != &c)
	{
		this->_name = c.getName();
		this->_hp = c.getHp();
		this->_ep = c.getEp();
		this->_dmg = c.getDmg();
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) { 
	std::cout << "Destructor Called" << std::endl;
}

/* Getters */

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

unsigned int	ClapTrap::getHp(void) const {
	return (this->_hp);
}

unsigned int	ClapTrap::getEp(void) const {
	return (this->_ep);
}

unsigned int	ClapTrap::getDmg(void) const {
	return (this->_dmg);
}

/* Member Function*/

void	ClapTrap::attack(const std::string & target) {
	if (this->_ep > 0 && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " 
		<< target << " causing "
		<< this->_dmg << " points of damage!" << std::endl;
		this->_ep--;
	}
	else if (this->_hp == 0)
	{
		std::cout <<  "ClapTrap " << this->_name 
		<< " is out of Hit Points" << std::endl;
	}
	else
	{
		std::cout <<  "ClapTrap " << this->_name 
		<< " is out of energy :(" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {	
	if (this->_hp > amount)
	{
		this->_hp -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " 
		<< amount << " points of damage! "
		<< std::endl;
	}
	else
	{
		this->_hp = 0;
		std::cout << "ClapTrap " << this->_name 
		<< " is out of Hit Points" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_ep > 0 && this->_hp > 0)
	{
		if (this->_hp + amount > this->hpLim)
			amount = this->hpLim - this->_hp;
		std::cout << "ClapTrap " << this->_name << " heals himse"
		"lf " << amount << " hit points" << std::endl;
		this->_hp += amount;
		this->_ep--;
	}
	else if (this->_hp == 0)
	{
		std::cout <<  "ClapTrap " << this->_name 
		<< " is out of Hit Points" << std::endl;
	}
	else
		std::cout <<  "ClapTrap " << this->_name 
		<< " is out of energy :(" << std::endl;
}
