/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:18:50 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 17:45:07 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class AWeapon {

public:

	AWeapon(std::string const& name="Rusty Pistol", int apcost=0, int damage=0);
	AWeapon(AWeapon const& src);
	AWeapon& operator=(AWeapon const& rhs);
	~AWeapon();

	std::string		getName(void) const;
	int				getApCost(void) const;
	int				getDamage(void) const;
	virtual void	attack(void) const = 0;

protected:

	std::string		_name;
	unsigned int	_apcost;
	unsigned int	_damage;
};

std::ostream&	operator<<(std::ostream& o, AWeapon const& i);
