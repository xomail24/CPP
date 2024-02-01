/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:29:46 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/24 23:39:19 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class	Bureaucrat;
#include <string>
#include <iostream>
class Form
{
	public:
		Form();
		Form( std::string Name, int reqGradeToSign, int reqGradeToExecute );
		Form( const Form & src );
		virtual ~Form();
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class FormIsNotSigned: public std::exception
		{
			virtual	const char * what() const throw();
		};

		Form &			operator = ( const Form & rhs );
		std::string		getName() const;
		bool			getisSigned()  const;
		int				getReqGradeToSign()  const;
		int				getReqGradeToExecute()  const;
		void			beSigned( Bureaucrat & brc );
		virtual void	execute( Bureaucrat const & executor ) const = 0;
		virtual void	action() const = 0;

	private:
		const std::string	_Name;
		bool				_isSigned;
		const int			_reqGradeToSign;
		const int			_reqGradeToExecute;
};

std::ostream&		operator << ( std::ostream& os, Form& form );

#endif
