/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/19 17:26:17 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	conclusion(bool condition, int num, int index, std::string s)
{
	if (condition == true)
	{
		std::cout << "Error return value: -1. ";
		std::cout << "Not found number \"" << num << "\" in " << s << std::endl;
	}
	else
		std::cout << "Found number \"" << num << "\" with index \"" << index << "\" in " << s << std::endl;
}

void	show_title(std::string s)
{
	std::cout << std::endl << CYAN << s << RESET;
}

int main(void)
{
	std::cout << "~~~ Declare vars ~~~" << std::endl;

	std::vector<int>		vec;
	std::deque<int>			deque;
	std::list<int>			lst;
	std::set<int>			set;
	std::multiset<int>		multiset;
	std::map<int, int>		map;
	std::multimap<int, int>	multimap;
	int						num;
	int						len;

	num = 5;
	len = 25;

	std::cout << "~~~ Set values ~~~" << std::endl;
	for (int i = 0; i < len; i++)
	{
		vec.push_back(i);
		deque.push_back(i);
		lst.push_back(i);
		if (!set.insert(i).second)
			std::cout << "failed to insert " << i << " in set !" << std::endl;
		multiset.insert(i);
		map[i] = i;
		multimap.insert(std::pair<int, int>(i, i));
	}
	std::list<int>::iterator			lst_i;
	std::set<int>::iterator				set_i;
	std::multiset<int>::iterator		multiset_i;
	std::multimap<int, int>::iterator	multimap_i;

	lst_i = lst.begin();
	set_i = set.begin();
	multiset_i = multiset.begin();
	multimap_i = multimap.begin();
	for (int i = 0; i < len; i++)
	{
		std::cout << vec[i] << " ";
		std::cout << deque[i] << " ";
		std::cout << *lst_i++ << " ";
		std::cout << *set_i++ << " ";
		std::cout << map[i] << " ";
		std::cout << *multiset_i++ << " ";
		std::cout << multimap_i->second++ << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	show_title("Vector:\t\t");
	{
		std::vector<int>::iterator	index;

		index = easyfind(vec, num);
		conclusion(index == vec.end(), num, *index, "vector");
	}

	show_title("Deque:\t\t");
	{
		std::deque<int>::iterator	index;

		index = easyfind(deque, num);
		conclusion(index == deque.end(), num, *index, "deque");
	}

	show_title("List:\t\t");
	{
		std::list<int>::iterator	index;

		index = easyfind(lst, num);
		conclusion(index == lst.end(), num, *index, "list");
	}

	show_title("Set:\t\t");
	{
		std::set<int>::iterator	index;

		index = easyfind(set, num);
		conclusion(index == set.end(), num, *index, "set");
	}

	show_title("Multiset:\t");
	{
		std::multiset<int>::iterator	index;

		index = easyfind(multiset, num);
		conclusion(index == multiset.end(), num, *index, "multiset");
	}

	show_title("Map:\t\t");
	{
		std::map<int, int>::iterator index;

		index  = easyfind(map, num);
		conclusion(index == map.end(), num, index->second, "map");
	}
	
	show_title("Multimap:\t");
	{
		std::multimap<int, int>::iterator	index;

		index = easyfind(multimap, num);
		conclusion(index == multimap.end(), num, index->second, "multimap");
	}
	return (0);
}
