/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:34:05 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:16:33 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AWeapon.hpp"


class PowerFist : public AWeapon {

public:

	PowerFist();
	PowerFist(PowerFist const& src);
	PowerFist& operator=(PowerFist const& rhs);
	virtual ~PowerFist();

	virtual void	attack() const;

};
