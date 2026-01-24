/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:42:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:33:46 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";

	std::cout	<< "WrongAnimal type constructor called for "
				<< this->type
				<< std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	std::cout	<< "WrongAnimal copy constructor called"
				<< std::endl;

	this->type = other.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout	<< "Default destructor called for animal type WrongAnimal"
				<< std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
	std::cout	<< "WrongAnimal assignment operator called"
				<< std::endl;

	if (this != &other)
		this->type = other.type;

	return (*this);
}

void		WrongAnimal::makeSound() const
{
	std::cout	<< "WrongAnimal sound of type " << this->type
				<< std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
