/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:34:42 by icheri            #+#    #+#             */
/*   Updated: 2022/07/06 20:27:49 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <unistd.h>

int main(int argc, char **argv)
{
	Harl test;
	int i;
	std::string level[] = {"debug", "info", "warning", "info"};

	if(argc != 1)
	{
		i = 0;
		for(; i < 4; i++)
		{
			if(argv[1] == level[i])
				break ;
			i++;
		}
		// while(i < 4)
		// 	test.complain(level[i++]);
		switch (i)
		{
			case 0:
				while(i < 4)
					test.complain(level[i++]);
				break;
			case 1:
				while(i < 4)
					test.complain(level[i++]);
				break;
			case 2:
				while(i < 4)
					test.complain(level[i++]);
				break;
			case 3:
				while(i < 4)
					test.complain(level[i++]);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
	return(0);
}
