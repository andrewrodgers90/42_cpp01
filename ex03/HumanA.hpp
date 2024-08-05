/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:21:49 by arodgers          #+#    #+#             */
/*   Updated: 2024/07/27 19:00:01 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{

	private :
		std::string	_name;
		Weapon		&_weapon;

	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void		attack(void);
};

#endif
