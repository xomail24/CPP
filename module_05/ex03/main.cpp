/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:40:04 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/24 23:40:05 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat					worker("worker", 7);

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << "Form Name: " << rrf->getName() << std::endl;
		std::cout << "Form Status: " << rrf->getisSigned() << std::endl;
		std::cout << "Form requirement Grade to Sign: " << rrf->getReqGradeToSign() << std::endl;
		std::cout << "Form Requirement Grade to Execute: " << rrf->getReqGradeToExecute() << std::endl;
		rrf->beSigned(worker);
		rrf->execute(worker);
		worker.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat					worker("worker", 7);

		rrf = someRandomIntern.makeForm("Some Random Form", "Bender");
		std::cout << "Form Name: " << rrf->getName() << std::endl;
		std::cout << "Form Status: " << rrf->getisSigned() << std::endl;
		std::cout << "Form requirement Grade to Sign: " << rrf->getReqGradeToSign() << std::endl;
		std::cout << "Form Requirement Grade to Execute: " << rrf->getReqGradeToExecute() << std::endl;
		rrf->beSigned(worker);
		rrf->execute(worker);
		worker.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
