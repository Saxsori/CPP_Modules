/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:23:53 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/01 01:08:54 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define	PHONEBOOK_HPP
# include <iostream>
# include "contact.hpp"

class phonebook
{
	private:
	int		_index;
	int		_length;
	contact _contact_list[8];

	public:
	phonebook();
	~phonebook();
	int	phonebook::GetLength();
	void	add_contact();
};

void	phonebook::add_contact(void)
{
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
	std::cout << "contact num " << this->_index << std::endl;
	this->_contact_list[this->_index].Fill__ContactFields();
}

phonebook::phonebook()
{
	this->_index = -1;
	this->_length = 10;
}

int	phonebook::GetLength()
{
	return (this->_length);
}

phonebook::~phonebook(){}


#endif