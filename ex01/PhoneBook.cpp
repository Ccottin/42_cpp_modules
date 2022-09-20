/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:22:31 by ccottin           #+#    #+#             */
/*   Updated: 2022/09/12 20:51:20 by ccottin          ###   ########.fr       */
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
	std::cout << "First name : "<< this->contacts[nb]._first_name << std::endl;
	std::cout << "Last name : "<< this->contacts[nb]._last_name << std::endl;
	std::cout << "Nick name : "<< this->contacts[nb]._nickname << std::endl;
	std::cout << "Phone number : "<< this->contacts[nb]._phone_number << std::endl;
	std::cout << "Darkest secret : "<< this->contacts[nb]._darkest_secret << std::endl;
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
		std::cout << set_str(this->contacts[contact]._first_name) << "|";
		std::cout << std::setw(10);
		std::cout << set_str(this->contacts[contact]._last_name) << "|";
		std::cout << std::setw(10);
		std::cout << set_str(this->contacts[contact]._phone_number) << std::endl;
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

void	PhoneBook::add_fonction(void)
{
	static int	add = 0;

	if (add == 8)
		add = 0;
	std::cout << "Create contact " << add + 1 << "\n";
	this->contacts[_nbcontact]._number = add + 1;
	std::cout << "Enter a firstname :\n";
	std::cin >> this->contacts[add]._first_name;
	std::cout << "Enter a lastname :\n";
	std::cin >> this->contacts[add]._last_name;
	std::cout << "Enter a nickname :\n";
	std::cin >> this->contacts[add]._nickname;
	std::cout << "Enter a phone number:\n";
	std::cin >> this->contacts[add]._phone_number;
	std::cout << "Enter contact darkest secret :\n";
	getline(std::cin, this->contacts[add]._darkest_secret);
	while (this->contacts[add]._darkest_secret.compare("") == 0)
		getline(std::cin, this->contacts[add]._darkest_secret);
	std::cout << "Contact " << add + 1 << " successfully created" << std::endl;
	if (this->_nbcontact != 9)
		this->_nbcontact++;
	add++;
}

int	main(int ac, char **av)
{
	PhoneBook	Book;
	std::string	str;

	(void)av;
	if (ac != 1)
		return (0);
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
