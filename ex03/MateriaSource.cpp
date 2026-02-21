/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:53:29 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/21 20:00:40 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Constructors / Destructors

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource( const MateriaSource& other ) {}

MateriaSource::~MateriaSource() {}

// Operator overloading

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {}

// Other Methods

void MateriaSource::learnMateria(AMateria*)
{

}

AMateria* MateriaSource::createMateria(std::string const & type)
{

}
