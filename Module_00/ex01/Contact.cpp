/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:05:50 by icheri            #+#    #+#             */
/*   Updated: 2022/05/23 23:12:28 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

string	Contact::get_first_name()
{
	return (first_name);
}

string	Contact::get_last_name()
{
	return (last_name);
}

string	Contact::get_nickname()
{
	return (nickname);
}

string Contact::get_phone_number()
{
	return (phone_number);
}

string Contact::get_darkest_secret()
{
	return (darkest_secret);
}
