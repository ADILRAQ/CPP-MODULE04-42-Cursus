/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:45:39 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/09 15:52:40 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain	*brain;

	public:
		Dog(void);
		Dog(const Dog &obj);
		virtual ~Dog(void);
		Dog			&operator = (const Dog &source);
		void		makeSound(void) const;
		// Getter && Setter
		void		setIdeas(std::string idea);
		std::string	getIdeas(int id) const;
};
