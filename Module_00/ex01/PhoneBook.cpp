/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:07:43 by icheri            #+#    #+#             */
/*   Updated: 2022/05/25 21:50:59 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static string	resize_add_dot(string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void	PhoneBook::_ShowContactsInfo()
{
	cout << "|Id Contact|First Name| Last Name|  NickName|"<< endl;
	for (int i = 0; i < this->id_contact; i++)
		cout<< "|" << setw(10) << i + 1 << "|" << setw(10)
		<< resize_add_dot(contacts[i].get_first_name()) << "|" << setw(10)
		<< resize_add_dot(contacts[i].get_last_name()) << "|" << setw(10)
		<< resize_add_dot(contacts[i].get_nickname()) << "|" << endl;
}

void PhoneBook::_add()
{
	string first_name, last_name, nickname, phone_number, darkest_secret;

	while(true)
	{
		cout << "First Name     : ";
		getline(cin, first_name);
		cout << "Last Name      : ";
		getline(cin, last_name);
		cout << "Nickname       : ";
		getline(cin, nickname);
		cout << "Phone number   : ";
		getline(cin, phone_number);
		cout << "Darkest secret : ";
		getline(cin, darkest_secret);
		if (!first_name.length() || !last_name.length() || !nickname.length() || !phone_number.length() || !darkest_secret.length())
			cout << "You cannot enter an empty field, please try again" << endl;
		else
			break ;
	}
	Contact new_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	this->contacts[id_current % 8] = new_contact;
	this->id_current++;
	if (id_current <= 8)
		this->id_contact = this->id_current;
	cout << endl << "Сontact added successfully !" << endl;
}

void PhoneBook::_search()
{
	int id;
	_ShowContactsInfo();
	cout << endl <<"Enter id contact: ";
	cin >> id;
	if (cin.fail() || id > this->id_contact )
	{
		cout << "Invalid contact id. Retype..." << endl;
		cin.clear();
	}
	else
	{
		cout << endl;
		cout << "First name     : " << this->contacts[id-1].get_first_name() << endl;
		cout << "Last name      : " << this->contacts[id-1].get_last_name() << endl;
		cout << "Nickname       : " << this->contacts[id-1].get_nickname() << endl;
		cout << "Phone number   : " << this->contacts[id-1].get_phone_number() << endl;
		cout << "Darkest secret : " << this->contacts[id-1].get_darkest_secret() << endl;
	}
	cin.ignore(INT_MAX, '\n');
}

void PhoneBook::_exit()
{
	cout << "Close PhoneBook" << endl;
	exit(0);
}

