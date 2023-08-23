/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:42:54 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/23 09:34:11 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include <iostream>

class Animal {
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(std::string Type);
		Animal(const Animal &obj);
		~Animal(void);
		Animal			&operator = (const Animal &source);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif /* _ANIMAL_HPP_ */