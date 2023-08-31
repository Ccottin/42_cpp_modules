/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:00:08 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 23:06:11 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{	
	DiamondTrap	one;
	DiamondTrap	two("two");

//	one = two;
//	two = DiamondTrap(one);

	std::cout << std::endl;
	std::cout << "a basic " << one.getClassName() << " " 
	<< one.getName() << " gets " << one.getHp() << " hp, "
	<< one.getEp() << " ep and deals " << one.getDmg()
	<< " damage points" << std::endl << std::endl;

	std::cout << "a basic " << two.getClassName() << " " 
	<< two.getName() << " gets " << two.getHp() << " hp, "
	<< two.getEp() << " ep and deals " << two.getDmg()
	<< " damage points" << std::endl << std::endl;

	one.setName("one");
	one.attack("two");
	std::cout << std::endl;
	two.takeDamage(89);
	two.beRepaired(100);
	std::cout << std::endl;
	one.whoAmI();
	two.whoAmI();
	std::cout << std::endl;
	one.guardGate();
	one.highFivesGuys();	
}
