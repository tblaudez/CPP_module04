/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:30:40 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 18:02:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

#include <iostream>


class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const& src);
	PlasmaRifle& operator=(PlasmaRifle const& rhs);
	~PlasmaRifle();

	virtual void	attack(void) const;

};

std::ostream&	operator<<(std::ostream& o, PlasmaRifle const& i);
