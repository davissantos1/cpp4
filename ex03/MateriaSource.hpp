/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:32:15 by dasimoes          #+#    #+#             */
/*   Updated: 2026/02/21 21:24:44 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		static const int	_sourcesSize = 4;
		AMateria*			_sources[4];	

	public:
		MateriaSource();
		MateriaSource( const MateriaSource& other );
		~MateriaSource();

		MateriaSource&	operator=( const MateriaSource& other );

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
