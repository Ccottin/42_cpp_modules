/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:07:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/08 23:09:02 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Harl	{

	public :

	Harl(void);
	~Harl(void);
	void	complain(std::string level, std::string filter);

	private :

	void	_filtered_Harl(void (Harl::*tab[4])(void), 
			std::string tab2[4], int i, std::string level);
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
};
