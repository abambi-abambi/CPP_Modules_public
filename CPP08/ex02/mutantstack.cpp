/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/19 16:19:50 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

// ** constructor **

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

// ** copy-constructor **

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src) : std::stack<T>(src)
{

}

// ** overload **

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &src)
{
	if (this != &src)
		std::stack<T>::operator=(src);
	return (*this);
}

// ** iterators **

// ** begins **

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin(void) const
{
	return (this->c.begin());
}

// ** ends **

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end(void) const
{
	return (this->c.end());
}

// ** destructor **

template<typename T>
MutantStack<T>::~MutantStack()
{

}
