/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:07:55 by arodgers          #+#    #+#             */
/*   Updated: 2024/07/27 17:00:17 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."; 
	std::cout << " You didn't put enough bacon in my burger!";
	std::cout << " If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free";
	std::cout << " I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::generic(void)
{
	std::cout << "[ Probably complaing about insignificant problems ]" << std::endl;
	std::cout << std::endl;
}

int	Harl::getComplaintLevel(std::string &arg)
{
	std::string	levels[4];
	int		i;

	i = 0;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while (i < 4)
	{
		if (arg == levels[i])
			return (i);
		i++;
	}
	return (4);
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr_complain[4])(void);
	std::string	levels[4];

	ptr_complain[0] = &Harl::debug;
	ptr_complain[1] = &Harl::info;
	ptr_complain[2] = &Harl::warning;
       	ptr_complain[3] = &Harl::error;

	switch (getComplaintLevel(level))
	{
		case 0 :
			(this->*ptr_complain[0])();
		case 1 :
			(this->*ptr_complain[1])();
		case 2 :
			(this->*ptr_complain[2])();
		case 3 :
			(this->*ptr_complain[3])();
			break ;
		case 4 :
			generic();
			break ;
	}
}
		

