/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:25:48 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/29 08:49:25 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(const Ice &obj)
{
	*this = obj;
}

Ice	&Ice::operator = (const Ice &source)
{
	if (this != &source)
		AMateria::operator=(source);
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*ptr = new Ice;

	return (ptr);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
