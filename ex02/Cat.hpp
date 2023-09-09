/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:44:33 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/09 15:56:00 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*brain;

	public:
		Cat(void);
		Cat(const Cat &obj);
		virtual ~Cat(void);
		Cat			&operator = (const Cat &source);
		void		makeSound(void) const;
		// Getter && Setter
		void		setIdeas(std::string idea);
		std::string	getIdeas(int id) const;
};
