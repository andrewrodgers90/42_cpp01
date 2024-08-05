/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:00:56 by arodgers          #+#    #+#             */
/*   Updated: 2024/07/27 19:42:49 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie{

	private:
		std::string	_name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
