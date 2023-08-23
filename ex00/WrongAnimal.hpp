/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:30:44 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/23 09:34:31 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
#define _WRONGANIMAL_HPP_

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

#endif /* _WRONGANIMAL_HPP_ */