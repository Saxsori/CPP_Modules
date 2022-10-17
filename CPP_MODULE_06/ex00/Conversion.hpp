/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:38:23 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/15 01:21:41 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <sstream>

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
		char		_charConversion(char num);
		void		_CastChar(char *num);
		void		_CastInt(char *num);
		void		_CastFloat(char *num);
		void		_CastDouble(char *num);
		std::string	_specialCase;
	public:
		int			isNum;
		int			noDec;
		Conversion();
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