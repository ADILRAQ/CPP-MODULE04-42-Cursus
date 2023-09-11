/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:44:33 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:49:22 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*brain;

	public:
		// Orthodox Canonical Form
		Cat(void);
		Cat(const Cat &obj);
		~Cat(void);
		Cat		&operator = (const Cat &source);

		// Implemented Methods
		void	makeSound(void) const;

		// Getter && Setter
		void		setIdeas(std::string idea);
		std::string	getIdeas(int id) const;
};
