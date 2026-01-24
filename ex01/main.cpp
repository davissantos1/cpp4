/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:26:21 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 17:36:26 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

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

		std::cout	<< "========= DOG AND CAT ARRAY TEST ========="
					<< std::endl << std::endl; 

		Animal** animals = new Animal*[100];
	
		for (int i = 0; i < 50; i++)
			animals[i] = new Dog();

		for (int j = 50; j < 100; j++)
			animals[j] = new Cat();

		std::cout << std::endl;

		std::cout	<< "========= MAKE SOUND METHOD TEST ========="
					<< std::endl << std::endl; 
		
		std::cout << "Array animal sounds:" << std::endl;
		animals[0]->makeSound();
		animals[50]->makeSound();

		std::cout << "Regular animal sounds:" << std::endl;
		animal.makeSound();
		dog.makeSound();
		cat.makeSound();
		animalDog->makeSound();
		animalCat->makeSound();

		std::cout << std::endl;

		std::cout	<< "========= ARRAY DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 

		for (int k = 0; k < 100; k++)
			delete (animals[k]);
		
		delete[] animals;

		std::cout << std::endl;

		std::cout	<< "========= SUBJECT'S MAIN TEST ========="
					<< std::endl << std::endl; 

		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;

		std::cout << std::endl;

		std::cout	<< "========= DEFAULT HEAP DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 

		delete (animalDog);
		delete (animalCat);
		delete (dogCopy);


		std::cout	<< "========= DEFAULT STACK DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 
	}
	return (0);
}
