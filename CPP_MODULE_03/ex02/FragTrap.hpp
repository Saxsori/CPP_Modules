/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:27:44 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 21:00:13 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
private:
	/* data */
public:
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	void highFivesGuys(void);
	FragTrap &operator = (FragTrap const &obj);
	FragTrap(const FragTrap &obj);
};

#endif