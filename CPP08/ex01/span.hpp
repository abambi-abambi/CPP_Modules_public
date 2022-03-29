/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/19 15:11:45 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
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

class Span
{
	private:
		unsigned int		len;
		std::vector<int>	arr;
		Span();
	public:
		Span(unsigned int N);
		Span(Span const &src);
		Span &operator=(Span const &src);
		virtual ~Span();

		class FullSpanException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class NotEnoughNumbersException: public std::exception
		{
			virtual const char* what() const throw();
		};

		void	addNumber(int value);
		void	addNumber(unsigned int begin, unsigned int end);
		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif
