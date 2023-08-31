/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/17 04:13:00 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Cat Constructor called" << std::endl;
	_brain = new Brain("Cat");
}

Cat::Cat(Cat const & ref)
{
	std::cout << "Copy Cat Constructor called" << std::endl;
	*this = ref;
}

Cat	&Cat::operator=(Cat const & ref)
{
	std::cout << "Operator Constructor Cat called" << std::endl;
	if (this != &ref)
	{
		this->type_ = ref.type_;
		this->_brain = new Brain(*ref._brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Destructor Cat called" << std::endl;
}
	
void	Cat::makeSound(void) const
{
	std::cout << "Mreow" << std::endl;
}

std::string	const	Cat::getIdea(int index) const
{
	return (_brain->getIdea(index));
}
