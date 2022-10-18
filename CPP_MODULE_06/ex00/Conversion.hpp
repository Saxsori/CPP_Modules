/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:38:23 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/18 02:53:35 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <sstream>
# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define BPUR "\e[0;35m"
# define DEFCOLO "\033[0m"


class Conversion
{
	private:
		int			_isDouble;
		int			_isFloat;
		int			_isInt;
		int			_isChar;
		int 		_decPoint;
		float		_floatNum;
		double		_doubleNum;
		int			_intNum;
		char		_charNum;
		int			_AsciiStatus;
		int			_isNumeric(std::string num);
		std::string	_specialCases(std::string num);
		void		_AsciiStatusCheck(int num);
		void		_checkDec();
		float		_floatConversion(char *num);
		double		_doubleConversion(char *num);
		int			_intConversion(char *num);
		char		_charConversion(char *num);
		void		_CastChar(char *num);
		void		_CastInt(char *num);
		void		_CastFloat(char *num);
		void		_CastDouble(char *num);
		std::string	_specialCase;
	public:
		int			isNum;
		int			noDec;
		Conversion();
		Conversion(Conversion &obj);
		Conversion &operator = (Conversion const &obj); 
		~Conversion();
		void		DoConversion(char *num);
		float		getFloat(void);
		double		getDouble(void);
		int			getInt(void);
		char		getChar(void);
		int			getAsciiStatus(void);
		std::string	getSpecialCase(void);
};

std::ostream &operator << (std::ostream &COUT, Conversion &conv);

#endif