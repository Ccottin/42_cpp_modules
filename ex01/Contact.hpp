/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:59:13 by ccottin           #+#    #+#             */
/*   Updated: 2022/08/15 15:11:47 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "CONTACT_HPP"
# define "CONTACT_HPP"

class	Contact {

public :

	Contact(void);
	~Contact(void);

	std::string	getstring(void) const;
	void		setstring(std::string);

private :

	int		_number;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
