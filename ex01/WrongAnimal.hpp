/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:36:22 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 15:32:50 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& other );
		virtual	~WrongAnimal();
		WrongAnimal&	operator=( const WrongAnimal& other );
		virtual void			makeSound() const;
		virtual std::string		getType() const;
};

#endif
