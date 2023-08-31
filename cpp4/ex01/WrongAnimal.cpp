/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/12 21:31:47 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal Constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type_(type)
{
	std::cout << "WrongAnimal Constructor called with string type "
	<< type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & ref)
{
	std::cout << "Copy WrongAnimal Constructor called" << std::endl;
	*this = ref;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & ref)
{
	std::cout << "Operator Constructor called" << std::endl;
	if (this != &ref)
		this->type_ = ref.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

void		WrongAnimal::setType(std::string type)
{
	type_ = type;
}

std::string const	WrongAnimal::getType(void) const
{
	return (type_);
}
	
void			WrongAnimal::makeSound(void) const
{
	std::cout << "*WrongAnimal noises*" << std::endl;
}


