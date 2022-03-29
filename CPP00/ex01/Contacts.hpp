/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/03 20:57:56 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>

class	Contacts
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contacts(void);
		void		set_first_name(void);
		std::string	get_first_name(void);
		void		set_last_name(void);
		std::string	get_last_name(void);
		void		set_nickname(void);
		std::string	get_nickname(void);
		void		set_phone_number(void);
		std::string	get_phone_number(void);
		void		set_darkest_secret(void);
		std::string	get_darkest_secret(void);
		void		check_end(void);
};

#endif
