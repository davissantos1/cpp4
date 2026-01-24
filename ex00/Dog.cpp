/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:42:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:24:38 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";

	std::cout	<< "Dog type constructor called for "
				<< this->type
				<< std::endl;
}

Dog::Dog( const Dog& other ) : Animal( other )
{
	std::cout	<< "Dog copy constructor called"
				<< std::endl;

	this->type = other.type;
}

Dog::~Dog()
{
	std::cout	<< "Default destructor called for animal type "
				<< this->type
				<< std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
	std::cout	<< "Dog assignment operator called"
				<< std::endl;

	if (this != &other)
	{
		Animal::operator=( other );
		this->type = other.type;
	}

	return (*this);
}

void		Dog::makeSound() const
{
	std::cout	<< "Woof woof 🐶"
				<< std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}
