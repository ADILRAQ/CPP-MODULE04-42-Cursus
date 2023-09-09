/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:30:44 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/09 15:56:10 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string Type);
		WrongAnimal(const WrongAnimal &obj);
		~WrongAnimal(void);
		WrongAnimal	&operator = (const WrongAnimal &source);
		std::string	getType(void) const;
		void		makeSound(void) const;
};
