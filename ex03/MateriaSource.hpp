/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:35:56 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:54:03 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*Mat[4];

	public:
		// Orthodox Canonical Form
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &obj);
		MateriaSource	&operator = (const MateriaSource &source);

		// Implemented Methods
		void			learnMateria(AMateria* materia);
		AMateria		*createMateria(std::string const & type);
};
