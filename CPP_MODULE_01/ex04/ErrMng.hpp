/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrMng.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:35:33 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/05 17:16:51 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRMNG_HPP
#define ERRMNG_HPP
#include <iostream>
#include <fstream>
# define BRED "\e[1;31m"
# define DEFCOLO "\033[0m"

class ErrMng
{
private:
	/* data */
public:
	ErrMng();
	~ErrMng();
	int ArgNumCheck(int ac);
	int	isArg(std::string file, std::string s1, std::string s2);
	std::string fileName(std::string name);
};


#endif