/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:54:47 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/29 08:49:52 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(const Cure &obj)
{
	*this = obj;
}

Cure	&Cure::operator = (const Cure &source)
{
	if (this != &source)
		AMateria::operator=(source);
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*ptr = new Cure;

	return (ptr);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

