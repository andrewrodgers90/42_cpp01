/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:24:35 by arodgers          #+#    #+#             */
/*   Updated: 2024/08/05 16:02:12 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon{

	private :
		std::string	_type;

	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string	&getType(void);
		void 			setType(std::string type);
};

#endif
