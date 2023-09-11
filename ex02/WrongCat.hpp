/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:38:10 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:50:35 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		// Orthodox Canonical Form
		WrongCat(void);
		WrongCat(const WrongCat &obj);
		~WrongCat(void);
		WrongCat	&operator = (const WrongCat &source);

		// Implemented Methods
		void		makeSound(void) const;
};
