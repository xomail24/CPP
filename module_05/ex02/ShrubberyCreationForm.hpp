/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:33:08 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/24 23:39:44 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
	public:
		static std::string const	Name;
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & src );
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator = ( const ShrubberyCreationForm & rhs );
		class FileCannotCreate: public std::exception
		{
			virtual	const char * what() const throw();
		};
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

	private:
		ShrubberyCreationForm();
		std::string const	_target;
};

#endif
