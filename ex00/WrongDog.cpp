/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:42:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:45:05 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	this->type = "WrongDog";

	std::cout	<< "WrongDog type constructor called for "
				<< this->type
				<< std::endl;
}

WrongDog::WrongDog( const WrongDog& other ) : WrongAnimal( other )
{
	std::cout	<< "WrongDog copy constructor called"
				<< std::endl;

	this->type = other.type;
}

WrongDog::~WrongDog()
{
	std::cout	<< "Default destructor called for animal type "
				<< this->type
				<< std::endl;
}

WrongDog& WrongDog::operator=( const WrongDog& other )
{
	std::cout	<< "WrongDog assignment operator called"
				<< std::endl;

	if (this != &other)
	{
		WrongAnimal::operator=( other );
		this->type = other.type;
	}

	return (*this);
}

void		WrongDog::makeSound() const
{
	std::cout	<< "Wrong woof wrong woof 🐶"
				<< std::endl;
}

std::string WrongDog::getType() const
{
	return (this->type);
}
