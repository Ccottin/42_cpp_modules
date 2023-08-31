/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:59:31 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/11 04:59:43 by ccottin          ###   ########.fr       */
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
	std::string	getClassName(void) const ;
	unsigned int	getHp(void) const ;
	unsigned int	getEp(void) const ;
	unsigned int	getDmg(void) const ;
	
	void		setName(const std::string);
	void		setClassName(const std::string);
	void		setHp(const int);
	void		setEp(const int);
	void		setDmg(const int);

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	protected :

	std::string	_className;
	std::string	_name;
	unsigned int		_maxHp;
	unsigned int		_hp;
	unsigned int		_ep;
	unsigned int		_dmg;
	
};

#endif
