/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:07:50 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/22 00:13:15 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors / Destructors

Character::Character(): _name( "default name") 
{
	for (int i = 0; i < this->_inventorySize; i++)
		this->_inventory[i] = NULL;
}

Character::~Character() 
{
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (this->_inventory[i])
			delete(this->_inventory[i]);
	}
}

Character::Character( const std::string name ): _name( name )
{
	for (int i = 0; i < this->_inventorySize; i++)
		this->_inventory[i] = NULL;
}

Character::Character( const Character& other )
{
	if (this != &other)
	{
		for (int i = 0; i < this->_inventorySize; i++)
			this->_inventory[i] = NULL;

		*this = other;
	}
}

// Operator Overloading

Character&	Character::operator=( const Character& other )
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < this->_inventorySize; i++)
		{
			if (this->_inventory[i])
				delete(this->_inventory[i]);
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}

// Other Methods

std::string	const& Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout	<< this->getName()
				<< ": my inventory is full, unequip and try again!"
				<< std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_inventorySize)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->_inventorySize)
		if (this->_inventory[idx] )
			this->_inventory[idx]->use(target);
}
