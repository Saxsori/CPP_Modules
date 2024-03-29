/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 01:34:56 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/18 07:27:52 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main ()
{
	Data *data = new Data;
	uintptr_t S;
	Data *D;
	
	data->data = 1;

	std::cout << data << std::endl;
	std::cout << data->data << std::endl;
	
	S = serialize(data);
	std::cout << S << std::endl;
	
	D = deserialize(S);
	std::cout << D << std::endl;
	std::cout << D->data << std::endl;
	
	S = serialize(D);
	std::cout << S << std::endl;
	
	delete data;
	
}