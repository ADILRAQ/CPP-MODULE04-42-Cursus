/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:42:54 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:45:19 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
	protected:
		std::string	type;

	public:
		// Orthodox Canonical Form
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &obj);
		Animal			&operator = (const Animal &source);

		// Param Constructor
		Animal(std::string Type);

		// Implemented Methods
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};
