/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:42:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:21:42 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";

	std::cout	<< "Cat type constructor called for "
				<< this->type
				<< std::endl;
}

Cat::Cat( const Cat& other ) : Animal( other )
{
	std::cout	<< "Cat copy constructor called"
				<< std::endl;

	this->type = other.type;
}

Cat::~Cat()
{
	std::cout	<< "Default destructor called for animal type "
				<< this->type
				<< std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
	std::cout	<< "Cat assignment operator called"
				<< std::endl;

	if (this != &other)
	{
		Animal::operator=( other );
		this->type = other.type;
	}

	return (*this);
}

void		Cat::makeSound() const
{
	std::cout	<< "Meow meow 🐱"
				<< std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}
