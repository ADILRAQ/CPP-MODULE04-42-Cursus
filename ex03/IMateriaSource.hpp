/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:32:24 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/28 09:18:52 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource(void);
		virtual void		learnMateria(AMateria* materia) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
};
