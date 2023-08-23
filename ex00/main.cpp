/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:41:41 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/23 09:36:46 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "TYPE: " << j->getType() << " " << std::endl;
	std::cout << "TYPE: " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// const WrongAnimal	*cat = new WrongAnimal();
	// const WrongAnimal	*ptr = new WrongCat();
	// cat->makeSound();
	// ptr->makeSound();
	return 0;
}
