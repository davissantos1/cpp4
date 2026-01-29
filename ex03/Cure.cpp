/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:07:50 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/29 18:31:58 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructors / Destructors

Cure::Cure() : AMateria( "cure" ) {}

~Cure::Cure() {}

Cure::Cure( const Cure& other )
{
	if (this != &other)
		*this = other;
}

// Operator Overloading

Cure&	Cure::operator=( const Cure& other )
{
	if (this != &other)
		this->_type = other._type;

	return (*this);
}

// Other Methods
AMateria*	Cure::clone() const
{
	AMateria* clone = new Cure();
	*clone = *this;

	return (clone);
}

void Cure::use( ICharacter& target );
{
	std::cout	<< "* heals " << target
				<< "'s wounds *" << std::endl;
}
