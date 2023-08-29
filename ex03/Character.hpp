/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:53:26 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/29 18:06:24 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string	Name;
		AMateria	*Slot[4];
		AMateria	**Collector;

	public:
		Character(void);
		Character(std::string name);
		~Character(void);
		Character(const Character &obj);
		Character			&operator = (const Character &source);
		std::string const	&getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		// TOOL
		void				keepAddress(int idx);
		// void				print();
};
