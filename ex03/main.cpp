/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 20:26:21 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/22 17:09:44 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

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

		std::cout	<< "========= CHARACTER TEST ========="
					<< std::endl << std::endl; 

		Character	testCharacter( "John" );
		ICharacter*	targetCharacter = new Character( "Victim" );

		std::cout	<< "created a new character named " 
					<< testCharacter.getName() << " and " 
					<< targetCharacter->getName()
					<< std::endl;
		
		std::cout << std::endl;

		std::cout	<< "========= HEAP AND EQUIP MATERIA TEST ========="
					<< std::endl << std::endl; 

		AMateria*	littleIce = new Ice();
		AMateria*	littleCure = new Cure();
		
		testCharacter.equip( littleIce );	
		testCharacter.equip( littleCure );	

		std::cout	<< "Equipped little ice and little cure"
					<< std::endl;
		
		std::cout << std::endl;

		std::cout	<< "========= UNEQUIP TEST ========="
					<< std::endl << std::endl; 

		testCharacter.unequip( 0 );	
		testCharacter.use(0, *targetCharacter); // unequipped materia test

		std::cout	<< "Unequipped little ice"
					<< std::endl;

		std::cout << std::endl;

		std::cout	<< "========= USE MATERIA TEST ========="
					<< std::endl << std::endl; 

		testCharacter.equip( littleIce );	
		testCharacter.use(0, *targetCharacter);

		testCharacter.use(10, *targetCharacter); // wrong ID test
		
		std::cout << std::endl;

		std::cout	<< "========= CLONE TEST ========="
					<< std::endl << std::endl; 

		AMateria* cloneLittleIce = littleIce->clone();
		AMateria* cloneLittleCure = littleCure->clone();

		std::cout	<< "cloned both little ice and little cure"
					<< std::endl;

		std::cout << std::endl;

		std::cout	<< "========= DEEP COPY TEST ========="
					<< std::endl << std::endl; 
	
		Character*	original = new Character( "Original" );
		original->equip( new Ice() );
		
		Character* copy = new Character( *original );
		copy->use(0, *original);

		std::cout	<< "cloned both little ice and little cure"
					<< std::endl;

		std::cout << std::endl;

		std::cout	<< "========= MATERIA SOURCE TEST ========="
					<< std::endl << std::endl; 

		IMateriaSource* newSource = new MateriaSource();

		newSource->learnMateria( cloneLittleCure );
		newSource->learnMateria( cloneLittleIce );

		AMateria*	createLittleIce = newSource->createMateria("ice");	
		AMateria*	createLittleCure = newSource->createMateria("cure");	

		targetCharacter->equip(createLittleIce);
		targetCharacter->equip(createLittleCure);

		std::cout	<< "Made new materia based of clones and equipped them to "
					<< targetCharacter->getName()
					<< std::endl;

		targetCharacter->use(0, testCharacter);
		targetCharacter->use(1, testCharacter);

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
		delete src;
		delete bob;
		delete me;

		std::cout << std::endl;

		std::cout	<< "========= DEFAULT HEAP DESTRUCTOR TEST ========="
					<< std::endl << std::endl; 

		delete (targetCharacter);
		delete (newSource);
		delete (original);
		delete (copy);

		std::cout 	<< "deleted targetCharacter, newSource, original and copy"
					<< std::endl;

		std::cout << std::endl;
	}
	return (0);
}
