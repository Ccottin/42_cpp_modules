/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:06:52 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 05:06:58 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {

	public :

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & c);
	ClapTrap &operator=(ClapTrap const & c);
	~ClapTrap(void);
	
	std::string	getName(void) const ;
	unsigned int	getHp(void) const ;
	unsigned int	getEp(void) const ;
	unsigned int	getDmg(void) const ;

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	static const unsigned int	hpLim = 10;

	private :
	
	std::string	_name;
	unsigned int		_hp;
	unsigned int		_ep;
	unsigned int		_dmg;
};


#endif
