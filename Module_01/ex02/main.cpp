/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:58:59 by icheri            #+#    #+#             */
/*   Updated: 2022/06/26 01:30:33 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "The Address in memory of the string:         " << &str << endl;
	cout << "The Address of the string using stringPTR:   " << stringPTR << endl;
	cout << "The Address of the string using stringREF:   " << &stringREF << endl;
	cout	<< "-----------------------------------------------------------------" << endl;
	cout << "The value of the string variable:            " << str << endl;
	cout << "Display the string using the pointer:        " << *stringPTR << endl;
	cout << "Display the string using the reference:      " << stringREF<< endl;
}
