/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:39:38 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/22 18:40:26 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default constructor called!" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Destructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	*this = obj;
}

WrongCat	&WrongCat::operator = (const WrongCat &source)
{
	if (this != &source)
		WrongAnimal::operator=(source);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow...!" << std::endl;
}