/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:21:47 by rnoriko           #+#    #+#             */
/*   Updated: 2022/08/26 13:27:43 by icheri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MUTANTSTACK_HPP)
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack const &other);
	~MutantStack();

	MutantStack<T> &operator=(MutantStack<T> const &other);

	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	iterator begin();
	iterator end();

	typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
	const_iterator cbegin() const;
	const_iterator cend() const;

	typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin();
	reverse_iterator rend();

	typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator crbegin() const;
	const_reverse_iterator crend() const;
};

#endif // MUTANTSTACK_HPP
