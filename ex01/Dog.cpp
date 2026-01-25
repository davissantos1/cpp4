/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:42:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/25 17:31:26 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain( "woof" );

	std::cout	<< "Dog type constructor called for "
				<< this->type
				<< std::endl;
}

Dog::Dog( const Dog& other ) : Animal( other )
{
	std::cout	<< "Dog copy constructor called"
				<< std::endl;

	this->brain = new Brain( *other.brain );
	this->type = other.type;
}

Dog::~Dog()
{
	delete ( this->brain );

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
		delete (this->brain);
		Animal::operator=( other );
		this->type = other.type;
		this->brain = new Brain( *other.brain );
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
