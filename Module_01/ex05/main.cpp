/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:34:42 by icheri            #+#    #+#             */
/*   Updated: 2022/07/06 19:38:45 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <unistd.h>

int main()
{
	Harl test;
	int i;
	int k;
	std::string level[] = {"debug", "info", "warning", "info"};

	k = 0;
	while(1)
	{
		i = k % 4;
		test.complain(level[i]);
		usleep(1000000);
		k++;
	}
	return(0);
}
