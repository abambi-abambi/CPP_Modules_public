/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/14 21:22:32 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <sstream>
# include <cmath>
# include <limits>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#define	IMPOSIBLE "\033[31mimposible\033[0m"

#define CHAR		0
#define INT			1
#define FLOAT		2
#define DOUBLE		3
#define INVALID		5

struct Data
{
	std::string	str;
	int			type;
	int			status[4];
	char		cvalue;
	int			ivalue;
	float		fvalue;
	double		dvalue;
	static const int isImpossible = 0x00000001;
	static const int nonDisplayable = 0x00000010;
};

Data	my_parser(std::string str);
Data	converter(Data data);
Data	converter_part2(Data data);
void	display_char(Data data, std::stringstream &ss);
void	display_int(Data data, std::stringstream &ss, std::ostream &out);
void	display_float(Data data, std::stringstream &ss, std::string tmp, std::ostream &out);
void	display_double(Data data, std::stringstream &ss, std::string tmp, std::ostream &out);

Data	select_type(Data data);
Data	handle_type(Data data, std::stringstream &ss);

std::ostream &operator<<(std::ostream &out, Data &data);

#endif
