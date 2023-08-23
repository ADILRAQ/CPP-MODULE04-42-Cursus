/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:57:03 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/22 15:32:11 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat: Default constructor called!" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat: Destructor called!" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
}

Cat	&Cat::operator = (const Cat &source)
{
	if (this != &source)
		Animal::operator=(source);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow...!" << std::endl;
}
