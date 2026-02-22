/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:37:39 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/21 21:44:00 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

// Constructors / Destructors

AMateria::AMateria() : _type( "default" ) {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria( const AMateria& other ): _type( other._type ) {}

// Operator Overloading

AMateria&	AMateria::operator=( const AMateria& other )
{
	(void) other;
	return (*this);
}

// Getter function

std::string const & AMateria::getType() const
{
	return (this->_type);
}

// Other Methods
void AMateria::use(ICharacter& target)
{
	std::cout	<< "* Uses generic material at "
				<< target.getName()
				<< " *" << std::endl;
}
