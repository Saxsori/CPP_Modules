/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:23:53 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/02 16:01:13 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define	PHONEBOOK_HPP
# include <iostream>
# include <string>
#include <sstream>
# include "contact.hpp"
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

class phonebook
{
	private:
	contact _contact_list[8];
	int		_index;
	int		_contact_num;

	public:
	phonebook();
	~phonebook();
	void		AddContact();
	void		SearchContact();
	std::string	GetColumn(std::string str);
	bool 		isNumeric(std::string str);
	void		FindContact();
};

#endif