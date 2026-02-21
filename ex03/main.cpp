/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:26:21 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/21 16:27:51 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout	<< "Wrong usage, please type with no arguments:\n"
					<< "./materia" 
					<< std::endl;
		return (1);
	}
	else
	{
		std::cout << std::endl;

		std::cout	<< "========= DEFAULT STACK CONSTRUCTOR TEST ========="
					<< std::endl << std::endl; 


		std::cout << std::endl;

		std::cout	<< "========= DEFAULT HEAP CONSTRUCTOR TEST ========="
					<< std::endl << std::endl; 

		std::cout << std::endl;

		std::cout	<< "========= COPY CONSTRUCTOR AND ASSIGNMENT TEST ========="
					<< std::endl << std::endl; 


		std::cout << std::endl;

		std::cout	<< "========= DOG AND CAT ARRAY TEST ========="
					<< std::endl << std::endl; 


		std::cout << std::endl;

		std::cout	<< "========= MAKE SOUND METHOD TEST ========="
					<< std::endl << std::endl; 
		

		std::cout << std::endl;

		std::cout	<< "========= ARRAY DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 

		std::cout << std::endl;

		std::cout	<< "========= SUBJECT'S MAIN TEST ========="
					<< std::endl << std::endl; 

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;

		std::cout << std::endl;

		std::cout	<< "========= DEFAULT HEAP DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 


		std::cout << std::endl;
		std::cout	<< "========= DEFAULT STACK DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 
	}
	return (0);
}
