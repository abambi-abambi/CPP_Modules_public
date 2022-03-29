/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <abambi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:13:12 by abambi            #+#    #+#             */
/*   Updated: 2021/11/12 15:06:43 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool				whetherSigned;
		int const			signGrade;
		int const			executeGrade;
	public:
		Form();
		Form(std::string const name, int const signGrade, int const executeGrade);
		Form(Form const &src);
		Form &operator=(Form const &src);
		~Form();

		std::string const	getName(void) const;
		bool				getWhetherSigned(void) const;
		int					getSignGrade(void) const;
		int					getExecuteGrade(void) const;
		void				beSigned(Bureaucrat const &man);

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
