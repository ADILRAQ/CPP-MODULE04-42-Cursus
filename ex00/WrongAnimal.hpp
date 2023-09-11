/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:30:44 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:43:22 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;

	public:
		// Orthodox Canonical Form
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &obj);
		~WrongAnimal(void);
		WrongAnimal	&operator = (const WrongAnimal &source);

		// Param Constructor
		WrongAnimal(std::string Type);

		// Implemented Methods
		std::string	getType(void) const;
		void		makeSound(void) const;
};
