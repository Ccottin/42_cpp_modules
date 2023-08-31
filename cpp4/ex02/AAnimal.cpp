/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/13 05:26:06 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type_("AAnimal")
{
	std::cout << "Default AAnimal Constructor called" << std::endl;
}
AAnimal::AAnimal(std::string type) : type_(type)
{
	std::cout << "AAnimal Constructor called with string type "
	<< type << std::endl;
}

AAnimal::AAnimal(AAnimal const & ref)
{
	std::cout << "Copy AAnimal Constructor called" << std::endl;
	*this = ref;
}

AAnimal	&AAnimal::operator=(AAnimal const & ref)
{
	std::cout << "Operator Constructor AAnimal called" << std::endl;
	if (this != &ref)
		this->type_ = ref.getType();
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor AAnimal called on "<< type_ << std::endl;
}

void		AAnimal::setType(std::string type)
{
	type_ = type;
}

std::string const	AAnimal::getType(void) const
{
	return (type_);
}
	
void			AAnimal::makeSound(void) const
{
	std::cout << "*AAnimal noises*" << std::endl;
}


