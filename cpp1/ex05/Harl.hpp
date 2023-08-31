/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:13:51 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/08 22:16:13 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Harl	{

	public :

	Harl(void);
	~Harl(void);
	void	complain(std::string level);

	private :

	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
};
