/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:42:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:44:22 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";

	std::cout	<< "WrongCat type constructor called for "
				<< this->type
				<< std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal( other )
{
	std::cout	<< "WrongCat copy constructor called"
				<< std::endl;

	this->type = other.type;
}

WrongCat::~WrongCat()
{
	std::cout	<< "Default destructor called for animal type "
				<< this->type
				<< std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other )
{
	std::cout	<< "WrongCat assignment operator called"
				<< std::endl;

	if (this != &other)
	{
		WrongAnimal::operator=( other );
		this->type = other.type;
	}

	return (*this);
}

void		WrongCat::makeSound() const
{
	std::cout	<< "Wrong meow wrong meow 🐱"
				<< std::endl;
}

std::string WrongCat::getType() const
{
	return (this->type);
}
