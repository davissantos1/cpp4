/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:42:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:21:20 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";

	std::cout	<< "Animal type constructor called for "
				<< this->type
				<< std::endl;
}

Animal::Animal( const Animal& other )
{
	std::cout	<< "Animal copy constructor called"
				<< std::endl;

	this->type = other.type;
}

Animal::~Animal()
{
	std::cout	<< "Default destructor called for animal type Animal"
				<< std::endl;
}

Animal& Animal::operator=( const Animal& other )
{
	std::cout	<< "Animal assignment operator called"
				<< std::endl;

	if (this != &other)
		this->type = other.type;

	return (*this);
}

void		Animal::makeSound() const
{
	std::cout	<< "Animal sound of type " << this->type
				<< std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
