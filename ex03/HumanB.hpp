/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:20:44 by arodgers          #+#    #+#             */
/*   Updated: 2024/07/27 18:38:06 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB{

	private :
		std::string	_name;
		Weapon		*_weapon;

	public :
		HumanB(std::string name);
		~HumanB();

		void		attack(void);
		void		setWeapon(Weapon &weapon);
};

#endif
