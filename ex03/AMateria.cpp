/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:37:39 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/29 18:11:31 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors / Destructors

AMateria::AMateria() : _type( "default" ) {}

AMateria::AMateria(std::string const & type) : _type(type) {}

~AMateria::AMateria() {}

AMateria::AMateria( const AMateria& other )
{
	if (this != &other)
		*this = other;
}

// Operator Overloading

AMateria&	AMateria::operator=( const AMateria& other )
{
	if (this != &other)
		this->_type = other._type;

	return (*this);
}

// Getter function

std::string const & AMateria::getType() const
{
	return (this->type);
}

// Other Methods
void use(ICharacter& target)
{
	// what to do?
}
