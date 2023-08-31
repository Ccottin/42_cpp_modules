#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{ }

Contact::~Contact(void)
{ }

int		Contact::getNumber(void)
{
	return (this->_number);
}
std::string	Contact::getFn(void)
{
	return (this->_first_name);
}

std::string	Contact::getLn(void)
{
	return (this->_last_name);
}
std::string	Contact::getNn(void)
{
	return (this->_nickname);
}

std::string	Contact::getPn(void)
{
	return (this->_phone_number);
}

std::string	Contact::getDs(void)
{
	return (this->_darkest_secret);
}

void		Contact::setNumber(int n)
{
	this->_number = n;
}

void		Contact::setFn(std::string str)
{
	this->_first_name = str;
}

void		Contact::setLn(std::string str)
{
	this->_last_name = str;
}

void		Contact::setNn(std::string str)
{
	this->_nickname = str;
}

void		Contact::setPn(std::string str)
{
	this->_phone_number = str;
}

void		Contact::setDs(std::string str)
{
	this->_darkest_secret = str;
}
