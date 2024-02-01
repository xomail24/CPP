/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:41:53 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/24 23:40:19 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		RobotomyRequestForm();
		std::string const	_target;
	public:
		static std::string const	Name;
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & src );
		~RobotomyRequestForm();
		RobotomyRequestForm & operator = ( const RobotomyRequestForm & rhs );
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class FormIsNotSigned: public std::exception
		{
			virtual	const char * what() const throw();
		};
		void	action() const;
		void	execute( Bureaucrat const & executor ) const;
};

#endif
