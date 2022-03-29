/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/05 22:47:54 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string address from &str:\t" << &str << std::endl;
	std::cout << "string address from stringPTR:\t" << stringPTR << std::endl;
	std::cout << "string address from &stringREF:\t" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "string value from *stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "string value from stringREF:\t" << stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Additional:" << std::endl;
	std::cout << "string value from str:\t\t" << str << std::endl;
}
