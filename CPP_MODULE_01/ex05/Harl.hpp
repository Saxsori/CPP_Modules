/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:45:34 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/06 15:18:41 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
# define BRED "\e[1;31m"
# define DEFCOLO "\033[0m"

/*
  ! declare a pointer to member function
  ? void (Harl::*funcptr) (void) = &Harl::error;
  ! call a pointer to member function
  ? (this->*(&Harl::error));
*/
class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void nothing(void);
	public:
		// void (Harl::*HARL_FUNC_ARRAY[5]) (void) = {&Harl::error, &Harl::warning, &Harl::debug, &Harl::info};
		void complain(std::string level);
		Harl();
		~Harl();
	// typedef void (*FUNC[]) (void);
};


#define HARL_FUNC_NAME (std::string[]){"ERROR", "WARNING", "DEBUG", "INFO"}
#define	FUNC_NUM 5
// #define HARL_FUNC_ARRAY (void (Harl::*HARL_FUNC_ARRAY[]) (void)){&Harl::error, &Harl::warning, &Harl::debug, &Harl::info}

#endif
