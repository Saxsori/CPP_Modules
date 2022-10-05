/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:32:52 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 15:55:48 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRREPLACE_HPP
#define STRREPLACE_HPP
# define BRED "\e[1;31m"
# define DEFCOLO "\033[0m"
#include <iostream>

class StrReplace
{
	private:
		std::string _new_line;
	public:
		std::string getNewLine();
		StrReplace();
		~StrReplace();
		void		takeStarter(std::string line, std::string s1, std::string s2);
		std::string replaceString(std::string line, std::string s1, std::string s2);
};




#endif