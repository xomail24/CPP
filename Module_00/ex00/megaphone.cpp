/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:21:27 by icheri            #+#    #+#             */
/*   Updated: 2022/05/14 19:33:23 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using namespace std;

int main (int argc, char **argv)
{
	int i;
	int j;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (argc > 1)
	{
		j = 1;
		while(argv[j])
		{
			i = 0;
			while(argv[j][i])
			{
				cout << (char)toupper(argv[j][i]);
				i++;
			}
			j++;
		}
	}
	cout << endl;
	return(0);
}
