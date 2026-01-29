/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:38:00 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/29 17:56:14 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class AMateria
{
	protected:
		std::string _type;
		AMateria&	operator=( const AMateria& other );

	public:
		AMateria();
		AMateria( const AMateria& other );
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type

		virtual	~AMateria();
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
