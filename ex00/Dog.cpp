/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:05:23 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/22 15:32:12 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog: Default constructor called!" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog: Destructor called!" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	*this = obj;
}

Dog	&Dog::operator = (const Dog &source)
{
	if (this != &source)
		Animal::operator=(source);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark...!" << std::endl;
}
