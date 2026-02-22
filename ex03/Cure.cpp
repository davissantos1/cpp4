/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:07:50 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/21 21:44:41 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

// Constructors / Destructors

Cure::Cure() : AMateria( "cure" ) {}

Cure::~Cure() {}

Cure::Cure( const Cure& other ): AMateria( other ) {}

// Operator Overloading

Cure&	Cure::operator=( const Cure& other )
{
	(void) other;
	return (*this);
}

// Other Methods
AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use( ICharacter& target )
{
	std::cout	<< "* heals " 
				<< target.getName()
				<< "'s wounds *" << std::endl;
}
