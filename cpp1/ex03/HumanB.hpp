/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:04:59 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 15:08:17 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class	HumanB {

	public :

	HumanB(std::string name);
	~HumanB(void);
	void		attack(void);
	void		setWeapon(Weapon & Weapon);
	
	private :

	std::string	_name;
	Weapon *	_Weapon;
};

#endif
