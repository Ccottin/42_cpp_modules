/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:58:25 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/18 02:15:02 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {

	public :
		
		Form(void);
		Form(std::string const name, int const gradeToSign,
				int const gradeToExecute);
		Form(Form const &ref);
		Form &operator=(Form const &ref);
		virtual ~Form(void);

		std::string const	getName(void) const;
		bool				getForm(void) const;
		int 				getToSign(void) const;
		int					getToExecute(void) const;

		void				beSigned(Bureaucrat const &b);

	/* Exceptions */

	class	GradeTooHighException : public std::exception
	{
		public :
			virtual const char * what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public :
			virtual const char * what() const throw();
	};

	class	AlreadySignedException : public std::exception
	{
		public :
			virtual const char * what() const throw();
	};


	protected :

	private :

		std::string const	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

		std::ostream	&operator<<(std::ostream &stream,
							Form const &ref);
#endif
