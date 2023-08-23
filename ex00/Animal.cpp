/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:59:17 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/22 15:32:03 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Animal: Default constructor called!" << std::endl;
}

Animal::Animal(std::string Type) : type(Type)
{
	std::cout << "Animal: Param constructor called!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Destructor called!" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
}

Animal	&Animal::operator = (const Animal &source)
{
	if (this != &source)
		type = source.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "HUH...!!" << std::endl;
}
