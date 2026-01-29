/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:05:55 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/29 18:29:29 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public IMateria
{
	public:
		Cure();
		~Cure();
		Cure( const Cure& other );

		Cure& operator=( const Cure& other );

		AMateria* clone() const;
		void use( ICharacter& target );
};

#endif
