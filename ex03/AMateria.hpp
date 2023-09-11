/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:14:56 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:52:41 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	Type;

	public:
		// Orthodox Canonical Form
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(const AMateria &obj);
		AMateria			&operator = (const AMateria &source);

		// Param Constructor
		AMateria(std::string const &type);

		// Implemented Methods
		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};
