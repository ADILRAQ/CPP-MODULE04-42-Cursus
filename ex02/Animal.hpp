/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:42:54 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/09 15:55:46 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(std::string Type);
		Animal(const Animal &obj);
		virtual ~Animal(void);
		Animal			&operator = (const Animal &source);
		virtual void	makeSound(void) const = 0;
		// Getter
		std::string		getType(void) const;
};
