/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:21:17 by abambi            #+#    #+#             */
/*   Updated: 2021/11/14 15:29:04 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Data	select_type(Data data, std::stringstream &s, int i, int len)
{
	for ( ; i < len; i++)
	{
		if (data.str[i] == '.' && data.type != DOUBLE)
		{
			s << data.str[i];
			data.type = DOUBLE;
		}
		else if (data.str[i] == 'e' && (i < len - 1) && std::isdigit(data.str[i + 1] \
		|| data.str[i + 1] == '+' || data.str[i + 1] == '-'))
		{
			s << data.str[i];
			s << data.str[i + 1];
			data.type = DOUBLE;
			i++;
		}
		else if (data.str[i] == 'f' && (i == len - 1) && data.type == DOUBLE)
			data.type = FLOAT;
		else if (std::isdigit(data.str[i]) == 0)
		{
			i = len;
			data.type = INVALID;
		}
		else
			s << data.str[i];
	}
	return (data);
}

Data	handle_type(Data data, std::stringstream &s)
{
	long long int	llvalue;

	if (data.type == INT)
	{
		s >> llvalue;
		if (llvalue > std::numeric_limits<int>::max() || llvalue < std::numeric_limits<int>::min()
			|| s.fail())
			data.type = INVALID;
		data.ivalue = llvalue;
	}
	else if (data.type == FLOAT)
		s >> data.fvalue;
	else if (data.type == DOUBLE)
		s >> data.dvalue;
	else if (data.type == INVALID)
	{
		if (data.str == "nanf" || data.str == "inff" || \
			data.str == "-inff" || data.str == "+inff")
		{
			data.type = FLOAT;
			data.fvalue = atof(data.str.c_str());
		}
		else if (data.str == "nan" || data.str == "inf" || \
				data.str == "-inf" || data.str == "+inf")
		{
			data.type = DOUBLE;
			data.dvalue = atof(data.str.c_str());
		}
	}
	return (data);
}

Data	my_parser(std::string str)
{
	Data				data;
	std::stringstream	s;
	size_t				len;
	size_t				i;

	data.str = str;
	len = data.str.length();
	i = 0;

	if (len == 1 && std::isdigit(data.str[0]) == 0)
	{
		data.cvalue = data.str[0];
		data.type = CHAR;
		return (data);
	}
	else
		data.type = INT;
	if (data.str[0] == '+' || data.str[0] == '-')
	{
		s << data.str[0];
		i++;
	}
	data = select_type(data, s, i, len);
	data = handle_type(data, s);
	return (data);
}
