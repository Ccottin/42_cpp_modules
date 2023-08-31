/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:07:01 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:07:04 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	one("Robert");
	ClapTrap	two("Georges");
	ClapTrap	three;

	two.takeDamage(11000);
	std::cout <<"two hp = " << two.getHp() << std::endl;	
	one.attack("Georges");
	two.takeDamage(5);
	two.beRepaired(7);
	one.beRepaired(11);
	std::cout <<"two hp = " << two.getHp() << std::endl;
	std::cout <<"one hp = " << one.getHp() << std::endl;
	two.attack("Robert");
	one.takeDamage(0);
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	three = one;
	three.attack("Nothing");
	two.beRepaired(10);
}
