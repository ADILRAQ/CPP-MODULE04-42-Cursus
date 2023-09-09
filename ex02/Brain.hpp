/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:47:13 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/09 15:55:53 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain &obj);
		~Brain(void);
		Brain		&operator = (const Brain &source);
		// Getter && Setter
		void		setIdeas(std::string idea);
		std::string	getIdeas(int id) const;
};
