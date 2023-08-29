/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:57:19 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/29 18:07:36 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	int	i = -1;

	// Collector = NULL;
	while (++i < 4)
		Slot[i] = NULL;
}

Character::Character(std::string name)
{
	int	i = -1;

	Name = name;
	// Collector = NULL;
	while (++i < 4)
		Slot[i] = NULL;
}

Character::~Character(void)
{
	int	i = -1;

	while (++i < 4)
		if (Slot[i])
			delete Slot[i];
	// TODO: DELETE COLLECTOR
	i = -1;
	while (Collector && Collector[++i])
		delete Collector[i];
	delete[] Collector;
}

Character::Character(const Character &obj)
{
	int	i = -1;

	while (++i < 4)
		Slot[i] = NULL;
	Collector = NULL;
	*this = obj;
}

Character	&Character::operator = (const Character &source)
{
	int	i = -1;

	if (this != &source)
	{
		this->Name = source.getName();
		while (++i < 4)
		{
			if (Slot[i])
			{
				delete this->Slot[i];
				this->Slot[i] = NULL;
			}
			if (source.Slot[i])
				this->Slot[i] = source.Slot[i]->clone();
		}
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (Name);
}

void	Character::equip(AMateria *m)
{
	int	i = -1;

	while (++i < 4)
	{
		if (!Slot[i])
		{
			Slot[i] = m;
			break ;
		}
	}
}

void	Character::keepAddress(int idx)
{
	AMateria	**newCollector;
	int			len = 0;
	int			i = 0;

	while (Collector && Collector[len])
		len++;
	newCollector = new AMateria*[len + 2];
	while (Collector && Collector[i])
	{
		newCollector[i] = Collector[i];
		i++;
	}
	newCollector[i++] = Slot[idx];
	Slot[idx] = NULL;
	newCollector[i] = NULL;
	delete[] Collector;
	Collector = newCollector;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && Slot[idx])
		keepAddress(idx);
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && Slot[idx])
		Slot[idx]->use(target);
}

// void	Character::print()
// {
// 	int	i = -1;

// 	std::cout << std::endl;
// 	while (Collector && Collector[++i])
// 		std::cout << ">" << Collector[i] << std::endl;
// 	std::cout << std::endl;
// 	i = -1;
// 	while (++i < 4)
// 		std::cout << "-->" << Slot[i] << std::endl;
// 	std::cout << std::endl;
// }
