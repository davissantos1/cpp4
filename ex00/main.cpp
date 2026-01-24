/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:26:21 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:46:55 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout	<< "Wrong usage, please type with no arguments:\n"
					<< "./animal" 
					<< std::endl;
		return (1);
	}
	else
	{
		std::cout << std::endl;

		std::cout	<< "========= DEFAULT STACK CONSTRUCTOR TEST ========="
					<< std::endl << std::endl; 

		Animal 	animal = Animal();
		Dog		dog = Dog();
		Cat		cat = Cat();

		std::cout << std::endl;

		std::cout	<< "========= DEFAULT HEAP CONSTRUCTOR TEST ========="
					<< std::endl << std::endl; 

		Animal 	*animalDog = new Dog;
		Animal 	*animalCat = new Cat;

		std::cout << std::endl;

		std::cout	<< "========= COPY CONSTRUCTOR AND ASSIGNMENT TEST ========="
					<< std::endl << std::endl; 

		Animal* dogCopy = new Dog( dog );
		Cat	catCopy;

		catCopy = cat;

		std::cout << std::endl;

		std::cout	<< "========= MAKE SOUND METHOD TEST ========="
					<< std::endl << std::endl; 
		
		animal.makeSound();
		dog.makeSound();
		cat.makeSound();
		animalDog->makeSound();
		animalCat->makeSound();

		std::cout << std::endl;

		std::cout	<< "========= DEFAULT HEAP DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 

		delete (animalDog);
		delete (animalCat);
		delete (dogCopy);

		std::cout << std::endl;

		std::cout	<< "========= SUBJECT'S MAIN TEST ========="
					<< std::endl << std::endl; 

		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		
		delete (i);
		delete (j);
		delete (meta);
		
		std::cout << std::endl;

		std::cout	<< "========= SUBJECT'S MAIN WRONG ANIMAL TEST ========="
					<< std::endl << std::endl; 

		const WrongAnimal* wrongMeta = new WrongAnimal();
		const WrongAnimal* k = new WrongDog();
		const WrongAnimal* l = new WrongCat();

		std::cout << k->getType() << " " << std::endl;
		std::cout << l->getType() << " " << std::endl;

		l->makeSound(); //will output the cat sound!
		k->makeSound();
		wrongMeta->makeSound();
		
		delete (k);
		delete (l);
		delete (wrongMeta);

		std::cout << std::endl;

		std::cout	<< "========= DEFAULT STACK DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 
	}
	return (0);
}
