/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:05:23 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/30 08:50:07 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog: Default constructor called!" << std::endl;
	brain = new Brain;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog: Destructor called!" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	brain = new Brain;
	*this = obj;
}

Dog	&Dog::operator = (const Dog &source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		*brain = *(source.brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark...!" << std::endl;
}

// Getter && Setter

void	Dog::setIdeas(std::string idea)
{
	brain->setIdeas(idea);
}

std::string	Dog::getIdeas(int id) const
{
	return (brain->getIdeas(id));
}
