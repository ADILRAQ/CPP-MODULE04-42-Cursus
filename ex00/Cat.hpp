/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:44:33 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:42:04 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
	public:
		// Orthodox Canonical Form
		Cat(void);
		Cat(const Cat &obj);
		~Cat(void);
		Cat		&operator = (const Cat &source);

		// Implemented Methods
		void	makeSound(void) const;
};
