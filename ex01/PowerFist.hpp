/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:34:05 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 18:02:14 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

#include <iostream>


class PowerFist : public AWeapon {

public:

	PowerFist();
	PowerFist(PowerFist const& src);
	PowerFist& operator=(PowerFist const& rhs);
	~PowerFist();

	virtual void	attack(void) const;

};

std::ostream&	operator<<(std::ostream& o, PowerFist const& i);
