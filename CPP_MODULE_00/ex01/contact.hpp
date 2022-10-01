/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:30:47 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/01 00:54:54 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

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