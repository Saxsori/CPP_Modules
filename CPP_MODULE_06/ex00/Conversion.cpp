/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:04:41 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/18 02:55:17 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion():_isDouble(0), _isFloat(0), _isInt(0), _isChar(0), _decPoint(0), _floatNum(0.0f), _doubleNum(0.0), _intNum(0), _charNum(0), _AsciiStatus(0), _specialCase(""), isNum(0), noDec(0){}

Conversion::Conversion(Conversion &obj)
{
	*this = obj;
}

Conversion &Conversion::operator = (Conversion const &obj)
{
	this->_specialCase = obj._specialCase;
	return (*this);
}

Conversion::~Conversion(){}

int	Conversion::_isNumeric(std::string num)
{
	if (num.length() == 1)
		return ((this->_isChar = 1));
	for (size_t i = 0; i < num.length(); i++)
	{
		if (!std::isdigit(num[i]))
		{
			// std::cout << "i - " << i << std::endl;
			if ((num[i] == '+' || num[i] == '-') && i == 0)
				continue ;
			if (num[i] == 'f' && (i + 1 == num.length()))
				continue ;
			if (num[i] == '.' && this->_decPoint == 0)
			{
				this->_decPoint++;
				continue ;
			}
			return (0);
		}
	}
	if (num[num.length() - 1] == 'f')
		this->_isFloat = 1;
	else if (this->_decPoint)
		this->_isDouble = 1;
	else
		this->_isInt = 1;
	return (1);
}

float	Conversion::_floatConversion(char *num)
{
	char *end;
	return (std::strtof(num, &end));
}

double	Conversion::_doubleConversion(char *num)
{
	char *end;
	return (std::strtod(num, &end));
}

int		Conversion::_intConversion(char *num)
{
	return (std::atoi(num));
}

void	Conversion::_AsciiStatusCheck(int num)
{
	if (num < 0 || num > 127)
		this->_AsciiStatus = -1;
	else if ((num >= 0 && num <= 31) || num == 127)
		this->_AsciiStatus = -2;
}

char	Conversion::_charConversion(char *num)
{
	this->_AsciiStatusCheck(atoi(num));
	return (atoi(num));
}

void	Conversion::_CastChar(char *num)
{
	this->_charNum = this->_charConversion(num);
	int Char = static_cast<int>(this->_charNum);
	if (std::isdigit(this->_charNum) && Char > 0)
		Char -= 48;
	this->_intNum = static_cast<int>(Char);
	this->_floatNum = static_cast<float>(Char);
	this->_doubleNum = static_cast<double>(Char);
}

void	Conversion::_CastInt(char *num)
{
	this->_intNum = this->_intConversion(num);
	this->_AsciiStatusCheck(this->_intNum);
	this->_charNum = static_cast<char>(this->_intNum);	
	this->_floatNum = static_cast<float>(this->_intNum);
	this->_doubleNum = static_cast<double>(this->_intNum);

}

void	Conversion::_CastFloat(char *num)
{
	this->_floatNum = this->_floatConversion(num);
	this->_AsciiStatusCheck(this->_floatNum);
	this->_charNum = static_cast<char>(this->_floatNum);	
	this->_intNum = static_cast<int>(this->_floatNum);
	this->_doubleNum = static_cast<double>(this->_floatNum);

}

void	Conversion::_CastDouble(char *num)
{
	this->_doubleNum = this->_doubleConversion(num);
	this->_AsciiStatusCheck(this->_doubleNum);
	this->_charNum = static_cast<char>(this->_doubleNum);	
	this->_intNum = static_cast<int>(this->_doubleNum);
	this->_floatNum = static_cast<float>(this->_doubleNum);
}

std::string	Conversion::_specialCases(std::string num)
{
	if (num == "+inf" || num == "inf" || num == "+inff" || num == "inff")
		this->_specialCase = "inf";
	else if (num == "nanf" || num == "nan")
		this->_specialCase = "nan";
	else if (num == "-inf" || num == "-inff")
		this->_specialCase = "-inf";
	return (this->_specialCase);
}

void	Conversion::_checkDec()
{
	std::ostringstream str;
	str << this->_doubleNum;
	std::string sNUM = str.str();
	int  found = sNUM.find(".");
	if (found == -1)
		this->noDec = 1;	
}

void	Conversion::DoConversion(char *num)
{
	this->isNum = 1;
	if (this->_isNumeric(num))
	{
		if (this->_isChar)
			this->_CastChar(num);
		if (this->_isDouble)
			this->_CastDouble(num);
		if (this->_isInt)
			this->_CastInt(num);
		if (this->_isFloat)
			this->_CastFloat(num);
		this->_checkDec();
	}
	else if (!this->_specialCases(num).empty())
		this->isNum = 2;
	else
		this->isNum = 0;
}

std::string	Conversion::getSpecialCase(void)
{
	return (this->_specialCase);
}

float	Conversion::getFloat(void)
{
	return (this->_floatNum);
}

double	Conversion::getDouble(void)
{
	return (this->_doubleNum);
}

int		Conversion::getInt(void)
{
	return (this->_intNum);
}

char	Conversion::getChar(void)
{
	return (this->_charNum);
}

int	Conversion::getAsciiStatus(void)
{
	return (this->_AsciiStatus);
}

std::ostream &operator << (std::ostream &COUT, Conversion &conv)
{
	if (conv.isNum)
	{
		COUT << "char: ";
		if (conv.getAsciiStatus() == -1 || conv.isNum == 2)
			COUT << "impossible" << std::endl;
		else if (conv.getAsciiStatus() == -2)
			COUT << "Non displayable" << std::endl;
		else
			COUT << conv.getChar() << std::endl;
		
		COUT << "int: ";
		if (conv.isNum == 2)
			COUT << "impossible" << std::endl;
		else
			COUT << conv.getInt() << std::endl;
		
		COUT << "float: ";
		if (conv.noDec)
			COUT << conv.getFloat() << ".0f" << std::endl;
		else if (conv.isNum == 2)
			COUT << conv.getSpecialCase() << "f" << std::endl;
		else
			COUT << conv.getFloat() << "f" << std::endl;
		
		COUT << "double: ";
		if (conv.noDec)
			COUT << conv.getDouble() << ".0" << std::endl;
		else if (conv.isNum == 2)
			COUT << conv.getSpecialCase() << std::endl;
		else
			COUT << conv.getDouble() << std::endl;

	}
	else
		COUT << "Error: it's not a numeric" << std::endl;
	return (COUT);
}