/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:36:22 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 17:35:07 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	brain;

	public:
		Cat();
		Cat( const Cat& other );
		~Cat();
		Cat&	operator=( const Cat& other );
		void			makeSound() const;
		std::string		getType() const;
};

#endif
