/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:07:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:07:38 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

/* Constructors, destructors, operators */

ScavTrap::ScavTrap(void) : _gate(0) {
	std::cout << "Default constructor is summoning a mighty default"
	" ScavTrap " << std::endl;
	setName("default");
	setClassName("ScavTrap");
	setHp(100);
	setEp(50);
	setDmg(20);
	this->_maxHp = 100;
}

ScavTrap::ScavTrap(std::string name) : _gate(0) {
	std::cout << "Default constructor is summoning a mighty ScavTrap " 
	<< name << std::endl;
	setName(name);
	setClassName("ScavTrap");
	setHp(100);
	setEp(50);
	setDmg(20);
	this->_maxHp = 100;
}

ScavTrap::ScavTrap(ScavTrap const & c) {
	std::cout << "Copy constructor copies a mighty ScavTrap" << std::endl;
	if (this != &c)
	{
		setName(c.getName());
		setHp(c.getHp());
		setEp(c.getEp());
		setDmg(c.getDmg());
		setClassName(c.getClassName());
		_maxHp = c._maxHp;
		_gate = 0;
	}
}

ScavTrap &ScavTrap::operator=(ScavTrap const & c) {
	std::cout << "Copy assignement constructor assigns a mighty ScavTrap" 
	<< std::endl;

	if (this != &c)
	{
		setName(c.getName());
		setHp(c.getHp());
		setEp(c.getEp());
		setDmg(c.getDmg());
		setClassName(c.getClassName());
		_maxHp = c._maxHp;
		_gate = 0;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void) { 
	std::cout << "ScavTrap Destructor Called on sad and lonely "
	<< getName() << std::endl;
}

/* Member Function */

void	ScavTrap::attack(const std::string & target) {
	if (getEp() > 0 && getHp() > 0)
	{
		std::cout << "ScavTrap " << getName() << " set " 
		<< target << " on fire causing "
		<< getDmg() << " points of damage!" << std::endl;
		setEp(getEp() - 1);
	}
	else if (getHp() == 0)
	{
		std::cout <<  "ScavTrap " << getName() 
		<< " is out of Hit Points" << std::endl;
	}
	else
	{
		std::cout <<  "ScavTrap " << getName() 
		<< " is out of energy :(" << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	if (getEp() > 0 && getHp() > 0)
	{
		if (_gate == 0)
		{
			std::cout << _className << " " << getName() 
			<< " is now gate keeping" << std::endl;
			setEp(getEp() - 1);
			_gate++;
		}
		else
		{
			std::cout << this->_className << " " << getName() 
			<< " is already keeping a gate" << std::endl;

		}
	}
	else if (getHp() == 0)
	{
		std::cout <<  "ScavTrap " << getName() 
		<< " is out of Hit Points" << std::endl;
	}
	else
		std::cout <<  "ScavTrap " << getName() 
		<< " is out of energy :(" << std::endl;
}
