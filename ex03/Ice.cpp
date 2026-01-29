/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:07:50 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/29 18:23:15 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors / Destructors

Ice::Ice() : AMateria( "ice" ) {}

~Ice::Ice() {}

Ice::Ice( const Ice& other )
{
	if (this != &other)
		*this = other;
}

// Operator Overloading

Ice&	Ice::operator=( const Ice& other )
{
	if (this != &other)
		this->_type = other._type;

	return (*this);
}

// Other Methods
AMateria*	Ice::clone() const
{
	AMateria* clone = new Ice();
	*clone = *this;

	return (clone);
}

void Ice::use( ICharacter& target );
{
	std::cout	<< "* shoots an ice bolt at " << target
				<< " *" << std::endl;
}
