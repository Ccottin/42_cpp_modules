/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/17 04:13:37 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Dog Constructor called" << std::endl;
	_brain = new Brain("Dog");
}

Dog::Dog(Dog const & ref)
{
	std::cout << "Copy Dog Constructor called" << std::endl;
	*this = ref;
}

Dog	&Dog::operator=(Dog const & ref)
{
	std::cout << "Operator Constructor Dog called" << std::endl;
	if (this != &ref)
	{
		this->type_ = ref.type_;
		this->_brain = new Brain(*ref._brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Destructor Dog called" << std::endl;
}

void		Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}

std::string const		Dog::getIdea(int index) const
{
	return (_brain->getIdea(index));
}
