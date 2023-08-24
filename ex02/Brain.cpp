/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:23:15 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/24 09:42:19 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: Default constructor called!" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
}

Brain::~Brain(void)
{
	std::cout << "Brain: Destrcuctor called!" << std::endl;
}

Brain	&Brain::operator = (const Brain &source)
{
	int	i;

	i = -1;
	if (this != &source)
	{
		while (++i < 100)
			ideas[i] = source.ideas[i];
	}
	return (*this);
}

// Getter && Setter

void	Brain::setIdeas(std::string idea)
{
	int	i;

	i = 0;
	while (!ideas[i].empty() && i < 100)
		i++;
	if (i >= 100)
		return ;
	ideas[i] = idea;
}

std::string	Brain::getIdeas(int id) const
{
	if (0 <= id && id <= 100)
		return (ideas[id]);
	return ("");
}
