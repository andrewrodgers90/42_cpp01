/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:18:38 by arodgers          #+#    #+#             */
/*   Updated: 2024/07/27 19:10:05 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	andy("Andy", club);
		andy.attack();
		club.setType("some other type of club");
		andy.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	bob("Bob");
		bob.setWeapon(club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	return (0);
}
