/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/12 21:18:28 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const & ref)
{
	std::cout << "Copy Cat Constructor called" << std::endl;
	*this = ref;
}

Cat	&Cat::operator=(Cat const & ref)
{
	std::cout << "Operator Constructor called" << std::endl;
	if (this != &ref)
		this->type_ = ref.type_;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}
	
void	Cat::makeSound(void) const
{
	std::cout << "Mreow" << std::endl;
}


