/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:18:06 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/26 13:27:22 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(EASYFIND_HPP)
#define EASYFIND_HPP

#include <iterator>

class OutOfRangeException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Out of range";
	}
};

template <class T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw OutOfRangeException();
	return it;
};

#endif // EASYFIND_HPP
