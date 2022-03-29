/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/19 18:24:04 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <numeric>

// ** constructors **

Span::Span()
{

}

Span::Span(unsigned int N)
{
	this->len = N;
}

// ** copy-constructor **

Span::Span(const Span &src)
{
	*this = src;
}

// ** overload **

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->arr.assign(src.arr.begin(), src.arr.end());
		this->len = src.len;
	}
	return *this;
}

// ** methods **

void Span::addNumber(int N)
{
	if (this->arr.size() == this->len)
		throw FullSpanException();
	else
		this->arr.push_back(N);
}

void Span::addNumber(unsigned int begin, unsigned int end)
{
	if (begin > this->len -1 || end > this->len -1
	|| begin > end)
	{
		std::cout << "Error: invalid indexes" << std::endl;
		return ;
	}
	if ((this->arr.size() + (end - begin + 1)) > this->len)
		throw Span::FullSpanException();
	std::srand(time(NULL));
	for (unsigned int i = begin; i <= end; ++i)
	{
		if (this->arr.size() == this->len)
			throw FullSpanException();
		else
		{
			int	random = rand();
			this->arr.push_back(random);
			std::cout << random << " ";
			// std::cout << " " << this->arr.capacity() << " " << this->arr.size();
		}
	}
}

int Span::shortestSpan()
{
	int	temp;

	if (this->arr.size() <= 1)
		throw Span::NotEnoughNumbersException();
	std::sort(this->arr.begin(), this->arr.end());
	temp = std::abs(this->arr.at(0) - this->arr.at(1));
	return (std::abs(temp));
}

int Span::longestSpan()
{
	int	difference;

	if (this->arr.size() <= 1)
		throw Span::NotEnoughNumbersException();
	int biggest = *std::max_element(this->arr.begin(), this->arr.end());
	int smallest = *std::min_element(this->arr.begin(), this->arr.end());
	difference = std::abs(biggest - smallest);
	return (difference);
}

// ** exceptions **

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return "SpanException: too few numbers in Span";
}

const char* Span::FullSpanException::what() const throw()
{
	return "SpanException: Span is already full";
}

// ** destructor **

Span::~Span()
{
	this->arr.clear();
}
