/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:19:40 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/24 23:46:11 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Roma("Roma", 2);

		std::cout << Roma;
		Roma.GardeIncrement();
		std::cout << Roma;
		Roma.GardeIncrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat sameone("Sameone", 149);

		std::cout << sameone;
		sameone.GradeDecrement();
		std::cout << sameone;
		sameone.GradeDecrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat sameone("Sameone", 999);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat sameone("Sameone", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
