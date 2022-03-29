/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/16 15:57:56 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <complex>

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
class Array
{
	private:
		unsigned int	len;
		T				*arr;

	public:
		Array<T>(void)
		{
			std::cout << "Default constructor is called" << std::endl;
			this->arr = new T[0];
			this->len = 0;
			// this->arr = new T(); alternative variant
		}

		Array<T>(unsigned int size)
		{
			std::cout << "Size-init constructor is called" << std::endl;
			this->arr = new T[size];
			this->len = size;
			std::fill(this->arr, this->arr + size, 0);
		}

		Array<T>(Array<T> &src)
		{
			std::cout << "Copy constructor is called" << std::endl;
			*this = src;
		}

		Array<T>	&operator=(Array<T> const &src)
		{
			std::cout << "Assignation overload called" << std::endl;
			if (this == &src)
				return *this;
			this->arr = new T[src.size()];
			this->len = src.size();
			for (unsigned int i = 0; i < this->len; i++)
				this->arr[i] = src[i];
			return *this;
		}

		T	&operator[](unsigned int index) const
		{
			if (index >= this->len)
				throw std::overflow_error("Index is out of the limits");
			return this->arr[index];
		}

		unsigned int	size(void) const
		{
			return this->len;
		}

		~Array<T>(void)
		{
			std::cout << "Destructor is called" << std::endl;
			delete [] this->arr;
		}
};

#endif
