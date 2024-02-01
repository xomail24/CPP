/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:06:17 by icheri            #+#    #+#             */
/*   Updated: 2022/06/01 09:45:59 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	string str = "2";
	string str1 = "1";
	int i = 0;
	while(i < 10)
	{
		newZombie("los");
		randomChump(str);
		str += str1;
		i++;
	}
	return (0);
}
