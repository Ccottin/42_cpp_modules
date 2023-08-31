/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:22:31 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 13:25:07 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
#include <string>

int	PhoneBook::_nbcontact = 1;

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to your empty phonebook, Human" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook closed and destroyed" << std::endl;
}

std::string	set_str(std::string str)
{
	if (str.size() > 9)
	{
		str[9] = '.';
		str.resize(10);
	}
	return (str);
}

void	PhoneBook::print_fonction(int nb)
{
	std::cout << "Contact " << nb + 1 << std::endl;
	std::cout << "First name : "<< this->contacts[nb].getFn() << std::endl;
	std::cout << "Last name : "<< this->contacts[nb].getLn() << std::endl;
	std::cout << "Nick name : "<< this->contacts[nb].getNn() << std::endl;
	std::cout << "Phone number : "<< this->contacts[nb].getPn() << std::endl;
	std::cout << "Darkest secret : "<< this->contacts[nb].getDs() << std::endl;
}

int	get_int(std::string str, int lim)
{
	if (str.size() == 1 && str[0] - 48 < lim && str[0] - 48 > 0)
		return (str[0] - 48);
	return (10);
}	

void	PhoneBook::search_fonction(void)
{
	int	contact;
	std::string	str;

	if (this->_nbcontact == 1)
	{
		(std::cout << "Phonebook is empty!\n");
		return ;
	}
	contact = 0;
	while (this->_nbcontact > contact + 1)
	{
		std::cout << std::setw(10);
		std::cout << contact + 1 << "|";
		std::cout << std::setw(10);
		std::cout << set_str(this->contacts[contact].getFn()) << "|";
		std::cout << std::setw(10);
		std::cout << set_str(this->contacts[contact].getLn()) << "|";
		std::cout << std::setw(10);
		std::cout << set_str(this->contacts[contact].getPn()) << std::endl;
		contact++;
	}
	contact++;
	while (contact >= this->_nbcontact)
	{
		std::cout << "Please make a selection" << std::endl;
		getline(std::cin, str);
		contact = get_int(str, this->_nbcontact);
	}
	this->print_fonction(contact - 1);
}
	void	setNumber(int);
	void	setFn(std::string);
	void	setLn(std::string);
	void	setNn(std::string);
	void	setPn(std::string);
	void	setDs(std::string);

void	PhoneBook::add_fonction(void)
{
	static int	add = 0;
	std::string	str;

	if (add == 8)
		add = 0;
	std::cout << "Create contact " << add + 1 << "\n";
	this->contacts[_nbcontact].setNumber(add + 1);

	std::cout << "Enter a firstname :\n";
	getline(std::cin, str);
	while (str.compare("") == 0)
		getline(std::cin, str);
	this->contacts[add].setFn(str);
	str.clear();

	std::cout << "Enter a lastname :\n";
	getline(std::cin, str);
	while (str.compare("") == 0)
		getline(std::cin, str);
	this->contacts[add].setLn(str);
	str.clear();

	std::cout << "Enter a nickname :\n";
	getline(std::cin, str);
	while (str.compare("") == 0)
		getline(std::cin, str);
	this->contacts[add].setNn(str);
	str.clear();

	std::cout << "Enter a phone number:\n";
	getline(std::cin, str);
	while (str.find_first_not_of("0123456789") != std::string::npos || str.compare("") == 0)
		getline(std::cin, str);
	this->contacts[add].setPn(str);
	str.clear();
	
	std::cout << "Enter contact darkest secret :\n";
	getline(std::cin, str);
	while (str.compare("") == 0)
		getline(std::cin, str);
	this->contacts[add].setDs(str);

	std::cout << "Contact " << add + 1 << " successfully created" << std::endl;
	if (this->_nbcontact != 9)
		this->_nbcontact++;
	add++;
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
		return (0);

	PhoneBook	Book;
	std::string	str;
	
	while (7)
	{
		getline(std::cin, str);
		if (!str.compare("ADD"))
			Book.add_fonction();
		else if (!str.compare("SEARCH"))
			Book.search_fonction();
		else if (!str.compare("EXIT"))
			return (0);
	}
	return (0);	
}
