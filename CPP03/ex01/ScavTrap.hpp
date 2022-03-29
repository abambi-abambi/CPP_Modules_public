/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/09 17:13:30 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLAVTRAP_HPP
#define SLAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap( void );
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		ScavTrap	&operator=(ScavTrap const &src);
		void		attack(std::string const & target);
		void		guardGate( void );
		~ScavTrap( void );
};

#endif
