/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:41:26 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/24 23:40:11 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

std::string const PresidentialPardonForm::Name = std::string("Presidential Pardon");

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
	Form(PresidentialPardonForm::Name, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
	Form::operator=(rhs);
	return (*this);
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	return ("PresidentialPardonFormException: Form Grade is too Low");
}

const char* PresidentialPardonForm::FormIsNotSigned::what() const throw()
{
	return ("PresidentialPardonFormException: Form Grade is Not signed");
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if(this->getisSigned() == false)
		throw PresidentialPardonForm::FormIsNotSigned();
	else if (this->getReqGradeToExecute() < executor.getGrage())
		throw PresidentialPardonForm::GradeTooLowException();
	this->action();
}
