/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:22:30 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/29 08:48:46 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice &obj);
		Ice			&operator = (const Ice &source);
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};
