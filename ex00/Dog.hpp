/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:45:39 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:42:36 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
	public:
		// Orthodox Canonical Form
		Dog(void);
		Dog(const Dog &obj);
		~Dog(void);
		Dog		&operator = (const Dog &source);

		// Implemented Methods
		void	makeSound(void) const;
};
