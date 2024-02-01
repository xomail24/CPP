/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:23:28 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/24 23:38:59 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat( const std::string Name, int Grade );
		Bureaucrat( const Bureaucrat & src );
		~Bureaucrat();
		Bureaucrat & operator = ( const Bureaucrat & rhs );
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};

		std::string		getName() const;
		int	getGrage() const;
		void			GardeIncrement();
		void			GradeDecrement();
		void			singForm( Form & form );

	private:
		const std::string	_Name;
		int					_Grade;
};

std::ostream& operator << ( std::ostream& os, Bureaucrat& brc );

#endif
