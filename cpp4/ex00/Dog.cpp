/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/12 21:01:08 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const & ref)
{
	std::cout << "Copy Dog Constructor called" << std::endl;
	*this = ref;
}

Dog	&Dog::operator=(Dog const & ref)
{
	std::cout << "Operator Constructor called" << std::endl;
	if (this != &ref)
		this->type_ = ref.type_;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
}

void		Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}


