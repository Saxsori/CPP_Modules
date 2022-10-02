/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:30:47 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/01 18:30:32 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
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

class contact
{
	private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_phone_number;
	std::string	_darkest_secret;

	public:
	contact();
	~contact();
	int			GetLength();
	void		Fill__ContactFields();
	void		SetFirstName();
	std::string	GetFirstName();
	void		SetLastName();
	std::string	GetLastName();
	void		SetNickName();
	std::string	GetNickName();
	void		SetPhoneNumber();
	std::string	GetPhoneNumber();
	void		SetDarkestSecret();
	std::string	GetDarkestSecret();
};

#endif