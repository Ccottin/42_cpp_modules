/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:09:37 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 23:16:26 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap {

	public :
	DiamondTrap(void);	
	DiamondTrap(std::string _name);	
	DiamondTrap(DiamondTrap const &d);
	DiamondTrap &operator=(DiamondTrap const &d);
    	~DiamondTrap(void);

	void			whoAmI(void);
	std::string const	getName(void) const;
	int			getDmg(void) const;
	std::string const	getClassName(void) const;

	
	using			FragTrap::getHp;
	using			FragTrap::getDmg;
	using			ScavTrap::attack;
	using			ScavTrap::getEp;

	protected :
	
	std::string	_className;

	private :

	std::string	_name;
};

#endif
