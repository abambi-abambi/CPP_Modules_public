/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/19 14:03:45 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.cpp"
#include "mutantstack.hpp"

int	main(void)
{
	std::cout << std::endl << "~~~ First mutant ~~~" << std::endl << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top element: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "top element: " << mstack.top() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(42);
	mstack.push(21);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << std::endl << "~~~ Content, from down to top ~~~" << std::endl << std::endl;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it; 
	}

	// {
	// 	MutantStack<int>::const_iterator it = mstack.begin();
	// 	MutantStack<int>::const_iterator ite = mstack.end();

	// 	++it;
	// 	--it;

	// 	std::cout << std::endl << "~~~ Content, from down to top ~~~" << std::endl << std::endl;
	// 	while(it != ite)
	// 	{
	// 		std::cout << *it << std::endl;
	// 		++it;
	// 	}
	// }

	std::cout << std::endl << "~~~ Another stack ~~~" << std::endl << std::endl;

	{
		std::stack<int>	s(mstack);

		std::cout << "size: " << s.size() << std::endl;
		std::cout << "top: " << s.top() << std::endl;
		s.pop();
		std::cout << "pop element" << std::endl;
		std::cout << "size: " << s.size() << std::endl;
		std::cout << "top: " << s.top() << std::endl;
	}

	std::cout << std::endl << "~~~ List ~~~" << std::endl << std::endl;
	std::list<int> liststack;
	liststack.push_back(5);
	liststack.push_back(17);
	std::cout << "size: " << liststack.size() << std::endl;
	std::cout << "top element: " << liststack.back() << std::endl;
	liststack.pop_back();
	std::cout << "size: " << liststack.size() << std::endl;
	std::cout << "top element: " << liststack.back() << std::endl;
	liststack.push_back(3);
	liststack.push_back(5);
	liststack.push_back(737);
	liststack.push_back(42);
	liststack.push_back(21);
	liststack.push_back(0);

	std::list<int>::iterator itl = liststack.begin();
	std::list<int>::iterator itle = liststack.end();

	++itl;
	--itl;

	std::cout << std::endl << "~~~ Content, from down to top ~~~" << std::endl << std::endl;
	while (itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::cout << std::endl;
	return (0);
}