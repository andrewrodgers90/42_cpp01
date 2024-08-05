/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:08:41 by arodgers          #+#    #+#             */
/*   Updated: 2024/07/27 16:58:58 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl{

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		int	getComplaintLevel(std::string &arg);

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
		void	generic(void);
};

#endif
