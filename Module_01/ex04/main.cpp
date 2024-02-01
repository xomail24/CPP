/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:00:47 by icheri            #+#    #+#             */
/*   Updated: 2022/07/04 19:29:26 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string ft_replace(std::string buffer, std::string s1, std::string s2)
{
	int start = buffer.find(s1);
	if(start != -1)
	{
		buffer.erase(start, s1.length());
		buffer.insert(start, s2);
	}
	return (buffer);
}

int check_args(std::string s1, std::string s2)
{
	if (s1.empty())
	{
		std::cout << "Empty line 's1'." << std::endl;
		return (1);
	}
	if (s2.empty())
	{
		std::cout << "Empty line 's2'." << std::endl;
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	std::fstream f_in(argv[1], std::fstream::in);
	std::string buffer;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}
	if (check_args(argv[2], argv[3]))
		return(1);
	if(f_in.is_open())
	{
		std::string f_name(argv[1]);
		std::fstream f_out(f_name + ".replace", std::fstream::out);
		while (getline(f_in, buffer))
		{
			buffer = ft_replace(buffer, argv[2], argv[3]);
			f_out << buffer << std::endl;
		}
		f_out.close();
	}
	else
	{
		std::cout << "File could not be opened." << std::endl;
		return(1);
	}
	f_in.close();
	return (0);
}
