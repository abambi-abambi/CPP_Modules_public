/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/14 17:46:50 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

void	display_char(Data data, std::stringstream &s)
{
	if ((data.status[CHAR] & data.isImpossible))
		s << CYAN << "char: " << RESET << IMPOSIBLE << std::endl;
	else if ((data.status[0] & data.nonDisplayable))
		s << CYAN << "char: " << RESET << "Non displayable" << std::endl;
	else
		s << CYAN << "char: " << RESET << "'" << data.cvalue << "'" << std::endl;
}

void	display_int(Data data, std::stringstream &s, std::ostream &out)
{
	if ((data.status[INT] & data.isImpossible))
		s << CYAN << "int: " << RESET << IMPOSIBLE << std::endl;
	else
		s << CYAN << "int: " << RESET << data.ivalue << std::endl;
	out << s.str();
	s.str(std::string());
	s.clear();
}

void	display_float(Data data, std::stringstream &s, std::string temp, std::ostream &out)
{
	if ((data.status[FLOAT] & data.isImpossible))
		s << CYAN << "float: " << RESET << IMPOSIBLE << std::endl;
	else
	{
		s << CYAN << "float: " << RESET << data.fvalue;
		temp = s.str();
		if (std::isnan(data.fvalue) == false && std::isinf(data.fvalue) == false \
			&& temp.find('.') == std::string::npos)
			s << ".0";
		s << "f" << std::endl;
	}
	out << s.str();
	s.str(std::string());
	s.clear();
}

void	display_double(Data data, std::stringstream &s, std::string temp, std::ostream &out)
{
	if ((data.status[DOUBLE] & data.isImpossible))
		s << CYAN << "double: " << RESET << IMPOSIBLE;
	else
	{
		s << CYAN << "double: " << RESET << data.dvalue;
		temp = s.str();
		if (std::isnan(data.dvalue) == false && std::isinf(data.dvalue) == false && \
			temp.find('.') == std::string::npos)
			s << ".0";
	}
	out << s.str();
	out << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Data &data)
{
	std::stringstream	s;
	std::string			temp;

	display_char(data, s);
	display_int(data, s, out);
	display_float(data, s, temp, out);
	display_double(data, s, temp, out);

	return (out);
}

Data	converter(Data data)
{
	for (int i = 0; i < 4; i++)
		data.status[i] = 0;
	if (data.type == INVALID)
	{
		data.status[CHAR] |= data.isImpossible;
		data.status[INT] |= data.isImpossible;
		data.status[FLOAT] |= data.isImpossible;
		data.status[DOUBLE] |= data.isImpossible;
	}
	else if (data.type == CHAR)
	{
		data.ivalue = static_cast<int>(data.cvalue);
		data.fvalue = static_cast<float>(data.cvalue);
		data.dvalue = static_cast<double>(data.cvalue);
	}
	else if (data.type == INT)
	{
		data.cvalue = static_cast<char>(data.ivalue);
		data.fvalue = static_cast<float>(data.ivalue);
		data.dvalue = static_cast<double>(data.ivalue);
	}
	data = converter_part2(data);
	return (data);
}

Data	converter_part2(Data data)
{
	if (data.type == FLOAT)
	{
		data.cvalue = static_cast<char>(data.fvalue);
		data.ivalue = static_cast<int>(data.fvalue);
		data.dvalue = static_cast<double>(data.fvalue);
		if ((std::isnan(data.fvalue) == true || std::isinf(data.fvalue) == true)
			|| data.fvalue > std::numeric_limits<int>::max() || data.fvalue < std::numeric_limits<int>::min())
			data.status[INT] |= data.isImpossible;
	}
	else if (data.type == DOUBLE)
	{
		data.cvalue = static_cast<char>(data.dvalue);
		data.ivalue = static_cast<int>(data.dvalue);
		data.fvalue = static_cast<float>(data.dvalue);
		if ((std::isnan(data.dvalue) == true || std::isinf(data.dvalue) == true)
			|| data.dvalue > std::numeric_limits<int>::max() || data.dvalue < std::numeric_limits<int>::min())
			data.status[INT] |= data.isImpossible;
	}
	if ((data.status[INT] & data.isImpossible) || data.ivalue > 127 || data.ivalue < 0)
		data.status[CHAR] |= data.isImpossible;
	if (std::isprint(data.cvalue) == 0)
		data.status[CHAR] |= data.nonDisplayable;
	return (data);
}
