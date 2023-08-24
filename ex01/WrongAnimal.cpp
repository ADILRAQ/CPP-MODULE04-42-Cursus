/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:32:34 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/22 18:33:39 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "WrongAnimal: Default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string Type) : type(Type)
{
	std::cout << "WrongAnimal: Param constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: Destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &source)
{
	if (this != &source)
		type = source.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WRONG ANIMAL...!!" << std::endl;
}