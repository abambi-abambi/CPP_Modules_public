/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/19 17:26:34 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <list>
# include <set>
# include <map>
# include <algorithm>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	return (std::find(container.begin(), container.end(), value));
}

template<typename keyT, typename valueT>
typename std::map<keyT, valueT>::iterator easyfind(std::map<keyT, valueT> &container, int value)
{
	return (container.find(value));
}

template<typename keyT, typename valueT>
typename std::multimap<keyT, valueT>::iterator easyfind(std::multimap<keyT, valueT> &container, int value)
{
	return (container.find(value));
}

#endif
