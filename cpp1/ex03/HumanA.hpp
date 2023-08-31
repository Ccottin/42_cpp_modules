/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:04:50 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/07 15:08:16 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA {

	public :

	HumanA(std::string name, Weapon & Weapon);
	~HumanA(void);
	void		attack(void);
	
	private :

	std::string	_name;
	Weapon &	_Weapon;
};

#endif
