/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:02:53 by icheri            #+#    #+#             */
/*   Updated: 2022/05/24 14:01:36 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <climits>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int id_contact;
		int id_current;
	public:
		PhoneBook():id_contact(0), id_current(0){}

		void _add();
		void _search();
		void _exit();

		void _ShowContactsInfo();

};

#endif
