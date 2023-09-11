/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:54:54 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:53:11 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		// Orthodox Canonical Form
		Cure(void);
		~Cure(void);
		Cure(const Cure &obj);
		Cure		&operator = (const Cure &source);

		// Implemented Methods
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};
