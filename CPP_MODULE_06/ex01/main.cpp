/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 01:34:56 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/15 02:02:07 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	int	data;
};

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

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