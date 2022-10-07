/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:59:13 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 12:49:14 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class	Contact {

public :

	Contact(void);
	~Contact(void);

	int		getNumber(void);
	std::string	getFn(void);
	std::string	getLn(void);
	std::string	getNn(void);
	std::string	getPn(void);
	std::string	getDs(void);

	void	setNumber(int);
	void	setFn(std::string);
	void	setLn(std::string);
	void	setNn(std::string);
	void	setPn(std::string);
	void	setDs(std::string);



private :

	int		_number;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
