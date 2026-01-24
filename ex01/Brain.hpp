/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:13:14 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/23 17:39:03 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain( const Brain& other );
		Brain( const std::string thought );
		Brain&	operator=( const Brain& other );
};

#endif
