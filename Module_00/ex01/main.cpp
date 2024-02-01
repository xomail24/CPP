/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:37:19 by icheri            #+#    #+#             */
/*   Updated: 2022/05/25 21:39:01 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	cover()
{
	cout << endl;
	cout << "#____________PHONEBOOK____________#" << endl;
	cout << "#         Enter 1 or ADD          #" << endl;
	cout << "#         Enter 2 or SEARCH       #" << endl;
	cout << "#         Enter 3 or EXIT         #" << endl;
	cout << "#_________________________________#" << endl;
}

int		main()
{
	PhoneBook	You_PhoneBook;
	string		command;

	cover();
	while(true)
	{
		cout << endl << "Enter the command (1 - ADD, 2 - SEARCH, 3 - EXIT): ";
		getline(cin, command);
		cout << endl;
		if (command == "ADD" || command == "1")
			You_PhoneBook._add();
		else if (command == "SEARCH" || command == "2")
			You_PhoneBook._search();
		else if (command == "EXIT" || command == "3")
			You_PhoneBook._exit();
	}
	return (0);
}
