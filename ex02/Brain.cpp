/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:16:05 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 17:41:15 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout	<< "Default constructor called for Brain"
				<< std::endl;

	for (int i = 0; i < 100; i++)
		this->ideas[i] = "random thought";
}

Brain::Brain( const std::string thought )
{
	std::cout	<< "String constructor called for Brain"
				<< std::endl;

	for (int i = 0; i < 100; i++)
		this->ideas[i] = thought;
}

Brain::Brain( const Brain& other )
{
	std::cout	<< "Copy constructor called for Brain"
				<< std::endl;

	for (int j = 0; j < 100; j++)
		this->ideas[j] = other.ideas[j];
}

Brain&	Brain::operator=( const Brain& other )
{
	std::cout	<< "Assignment operator called for Brain"
				<< std::endl;
	
	if (this != &other)
	{
		for (int j = 0; j < 100; j++)
			this->ideas[j] = other.ideas[j];
	}

	return (*this);
}

Brain::~Brain()
{
	std::cout	<< "Default destructor called for Brain"
				<< std::endl;
}
