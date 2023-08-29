/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:17:28 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/29 08:50:49 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type) : Type(type)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}

AMateria	&AMateria::operator = (const AMateria &source)
{
	if (this != &source)
		Type = source.Type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (Type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}
