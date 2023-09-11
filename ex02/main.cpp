/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:41:41 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/11 12:36:34 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	NBANIMALS = 2;

int main()
{
	if (NBANIMALS > 0)
	{
		Animal	*ptr[NBANIMALS];
		Cat		*cat;
		Dog		*dog;
		int		i = -1;

		while (++i < NBANIMALS)
		{
			if (i < NBANIMALS / 2)
			{
				dog = new Dog;
				ptr[i] = dog;
				dog->setIdeas("I'm a Dog, I can't think U Stupid");
				std::cout << dog->getIdeas(0) << std::endl;
			}
			else
			{
				cat = new Cat;
				ptr[i] = cat;
				cat->setIdeas("Stupid Cat");
				std::cout << cat->getIdeas(0) << std::endl;
			}
		}
		std::cout << std::endl;
		i = -1;
		while (++i < NBANIMALS)
			delete ptr[i];
	}
	return 0;
}
