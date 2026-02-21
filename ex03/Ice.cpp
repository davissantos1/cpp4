/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:07:50 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/21 17:21:45 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors / Destructors

Ice::Ice() : AMateria( "ice" ) {}

Ice::~Ice() {}

Ice::Ice( const Ice& other ): AMateria( other ) {}

// Operator Overloading

Ice&	Ice::operator=( const Ice& other )
{
	(void) other;
	return (*this);
}

// Other Methods
AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use( ICharacter& target )
{
	std::cout	<< "* shoots an ice bolt at " 
				<< target.getName()
				<< " *" << std::endl;
}
