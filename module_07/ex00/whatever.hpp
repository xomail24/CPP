/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:43:45 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/26 13:26:58 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	&min(T &x, T &y)
{
	return ((x < y) ? x : y);
}

template <typename T>
T	&max(T &x, T &y)
{
	return ((x > y) ? x : y);
}
#endif
