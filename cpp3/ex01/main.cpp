/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:07:27 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:07:39 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	one("Ichi");
	ScavTrap	two("Ni");
	ScavTrap	three(one);
	ClapTrap	four("Go");

	std::cout << "a basic " << four.getClassName() << " " 
	<< four.getName() << " gets " << four.getHp() << " hp, "
	<< four.getEp() << " ep and deals " << four.getDmg()
	<< " damage points" << std::endl << std::endl;
	
	std::cout << "a basic " << one.getClassName() << " " 
	<< one.getName() << " gets " << one.getHp() << " hp, "
	<< one.getEp() << " ep and deals " << one.getDmg()
	<< " damage points" << std::endl << std::endl;

	one.attack("Ni");
	two.takeDamage(20);
	std::cout << "Ni hp = " << two.getHp() << std::endl;
	std::cout << "ichi ep = " << one.getEp() << std::endl;
	three.setName("San");
	std::cout << three.getName() << std::endl;
	std::cout << "San ep = " << three.getEp() << std::endl;
	three.guardGate();
	std::cout << "San ep = " << three.getEp() << std::endl;
	three.guardGate();
	std::cout << "San ep = " << three.getEp() << std::endl;
	three = one;
	std::cout << three.getName() << " got " << three.getEp() 
	<< " ep" << std::endl;
	one.beRepaired(5000);
	two.beRepaired(5000);
	four.attack("himself");
}
