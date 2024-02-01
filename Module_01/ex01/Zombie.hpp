/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:07:01 by icheri            #+#    #+#             */
/*   Updated: 2022/06/01 09:57:35 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

using namespace std;

class Zombie
{
	private :
	string name;
	public :
	~Zombie();
	void announce();
	string get_name();
	void set_name(string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
