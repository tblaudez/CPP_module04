/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:30:40 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:15:58 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AWeapon.hpp"


class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const& src);
	PlasmaRifle& operator=(PlasmaRifle const& rhs);
	virtual ~PlasmaRifle();

	virtual void	attack() const;

};
