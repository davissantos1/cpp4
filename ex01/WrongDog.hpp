/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:36:22 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:44:32 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class	WrongDog : public WrongAnimal
{
	public:
		WrongDog();
		WrongDog( const WrongDog& other );
		~WrongDog();
		WrongDog&	operator=( const WrongDog& other );
		void			makeSound() const;
		std::string		getType() const;
};

#endif
