/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:59:26 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 23:20:46 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

/* Constructors, destructors, operators */

ClapTrap::ClapTrap(void) : _className("ClapTrap"), _name("default"),
	_maxHp(10), _hp(10), _ep(10), _dmg(0) {
	std::cout << "Default constructor is summoning a default"
	" ClapTrap " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _className("ClapTrap"), _name(name),
	_maxHp(10), _hp(10), _ep(10), _dmg(0) {
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
		this->_className = c.getClassName();
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
		this->_className = c.getClassName();
	}
	return (*this);
}

ClapTrap::~ClapTrap(void) { 
	std::cout << "ClapTrap Destructor Called on "
	<< _name << std::endl;
}

/* Getters */

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

std::string	ClapTrap::getClassName(void) const {
	return (this->_className);
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

/* Setters */

void		ClapTrap::setName(const std::string s) {
	_name = s;
}

void		ClapTrap::setClassName(const std::string s) {
	_className = s;
}

void		ClapTrap::setHp(const int h) {
	_hp = h;
}

void		ClapTrap::setEp(const int e) {
	_ep = e;
}

void		ClapTrap::setDmg(const int d) {
	_dmg = d;
}

/* Member Function*/

void	ClapTrap::attack(const std::string & target) {
	if (this->_ep > 0 && this->_hp > 0)
	{
		std::cout << this->_className << " " << this->_name
		<< " attacks " << target << " causing "
		<< this->_dmg << " points of damage!" << std::endl;
		this->_ep--;
	}
	else if (this->_hp == 0)
	{
		std::cout << this->_className << " " << this->_name 
		<< " is out of Hit Points" << std::endl;
	}
	else
	{
		std::cout << this->_className << " " << this->_name 
		<< " is out of energy :(" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {	
	std::cout << this->_name << " " << this->_className << " takes "
	<< amount << " points of damage! " << std::endl;
	if (this->_hp > amount)
		this->_hp -= amount;
	else
	{
		this->_hp = 0;
		std::cout << this->_className << " "
		<< this->_name << " is out of Hit Points" 
		<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_ep > 0 && this->_hp > 0)
	{
		if (this->_hp + amount > this->_maxHp)
			amount = this->_maxHp - this->_hp;
		std::cout << this->_className << " "
		<< this->_name << " heals himself "
		<< amount << " hit points" << std::endl;
		this->_hp += amount;
		this->_ep--;
	}
	else if (this->_hp == 0)
	{
		std::cout << this->_className << " " << this->_name 
		<< " is out of Hit Points" << std::endl;
	}
	else
		std::cout << this->_className << " " << this->_name 
		<< " is out of energy :(" << std::endl;
}
