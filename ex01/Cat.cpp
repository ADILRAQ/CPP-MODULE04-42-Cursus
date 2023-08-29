/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:57:03 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/27 16:44:10 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat: Default constructor called!" << std::endl;
	brain = new Brain;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat: Destructor called!" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	brain = new Brain;
	*this = obj;
}

Cat	&Cat::operator = (const Cat &source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		*brain = *(source.brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow...!" << std::endl;
}

// Getter && Setter

void	Cat::setIdeas(std::string idea)
{
	brain->setIdeas(idea);
}

std::string	Cat::getIdeas(int id) const
{
	return (brain->getIdeas(id));
}
