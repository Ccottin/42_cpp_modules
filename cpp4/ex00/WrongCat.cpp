/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/12 21:22:45 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & ref)
{
	std::cout << "Copy WrongCat Constructor called" << std::endl;
	*this = ref;
}

WrongCat	&WrongCat::operator=(WrongCat const & ref)
{
	std::cout << "Operator Constructor called" << std::endl;
	if (this != &ref)
		this->type_ = ref.type_;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat called" << std::endl;
}
	
void	WrongCat::makeSound(void) const
{
	std::cout << "Mreow" << std::endl;
}


