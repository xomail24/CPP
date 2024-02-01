/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:05:48 by icheri            #+#    #+#             */
/*   Updated: 2022/05/23 23:12:35 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

using namespace std;

class Contact
{
	private:
	string first_name, last_name, nickname, phone_number, darkest_secret;
	public:
	Contact(){}
	Contact(string first_name, string last_name,string nickname, string phone_number, string darkest_secret)
	{
		this->first_name = first_name;
		this->last_name = last_name;
		this->nickname = nickname;
		this->phone_number = phone_number;
		this->darkest_secret = darkest_secret;
	}
	string get_first_name();
	string get_last_name();
	string get_nickname();
	string get_phone_number();
	string get_darkest_secret();
};

#endif
