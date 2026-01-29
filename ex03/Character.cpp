/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:07:50 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/29 19:01:26 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors / Destructors

Character::Character()
{


}

~Character::Character() {}

Character::Character( const Character& other )
{
	if (this != &other)
		*this = other;
}

// Operator Overloading

Character&	Character::operator=( const Character& other )
{
	if (this != &other)
		this->_type = other._type;

	return (*this);
}

// Other Methods

std::string	const& Character::getName() const
{

}

void	Character::equip(AMateria* m)
{

}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter& target)
{

}
