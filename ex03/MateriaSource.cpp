/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:42:15 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/29 09:00:21 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	i = -1;

	while (++i < 4)
		Mat[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	int	i = -1;

	while (++i < 4)
		if (Mat[i])
			delete Mat[i];
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &source)
{
	int	i = -1;

	if (this != &source)
	{
		while (++i < 4)
		{
			delete this->Mat[i];
			this->Mat[i] = NULL;
			if (source.Mat[i])
				this->Mat[i] = source.Mat[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	i = -1;

	while (++i < 4)
	{
		if (!Mat[i])
		{
			Mat[i] = materia;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i = -1;

	while (++i < 4)
		if (Mat[i] && Mat[i]->getType() == type)
			return (Mat[i]->clone());
	return (NULL);
}
