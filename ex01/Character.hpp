/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:17:12 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 18:41:58 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"
#include "Enemy.hpp"

#include <iostream>
#include <string>


class Character {

public:

	Character(std::string const& name="Player");
	Character(Character const& src);
	Character& operator=(Character const& rhs);
	~Character();

	void	recoverHP(void);
	void	equip(AWeapon* weapon);
	void	attack(Enemy* enemy);

	std::string	getName(void) const;
	int			getAP(void) const;
	AWeapon*	getWeapon(void) const;

private:

	std::string	_name;
	int			_ap;
	AWeapon*	_weapon;
};

std::ostream&	operator<<(std::ostream& o, Character const& i);
