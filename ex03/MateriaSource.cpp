/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:53:29 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/22 15:43:14 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Constructors / Destructors

MateriaSource::MateriaSource() 
{
	for (int i = 0; i < this->_sourcesSize; i++)
		this->_sources[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& other ) 
{
	if (this != &other)
	{
		for (int i = 0; i < this->_sourcesSize; i++)
			this->_sources[i] = NULL;
		*this = other;
	}
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < this->_sourcesSize; i++)
	{
		if (this->_sources[i])
			delete (this->_sources[i]);
	}
}

// Operator overloading

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) 
{
	if (this != &other)
	{
		for (int i = 0; i < _sourcesSize; i++)
		{
			if (this->_sources[i])
				delete (this->_sources[i]);
			if (other._sources[i])
				this->_sources[i] = other._sources[i]->clone();
		}
	}
	return (*this);
}

// Other Methods

void MateriaSource::learnMateria(AMateria* mat)
{
	if (!mat)
		return ;
	for (int i = 0; i < this->_sourcesSize; i++)
	{
		if (!this->_sources[i])
		{
			this->_sources[i] = mat->clone();
			delete (mat);
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_sourcesSize; i++)
	{
		if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	}
	return (0);
}
