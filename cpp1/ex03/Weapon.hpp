/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:05:06 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 15:08:19 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {

	public :

	Weapon(std::string type);
	~Weapon(void);
	std::string const	getType(void);
	void			setType(std::string type);

	private :

	std::string	_type;
};

#endif
