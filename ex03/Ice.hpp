/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:05:55 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/29 18:26:57 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public IMateria
{
	public:
		Ice();
		~Ice();
		Ice( const Ice& other );

		Ice& operator=( const Ice& other );

		AMateria* clone() const;
		void use( ICharacter& target );
};

#endif
