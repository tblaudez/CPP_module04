/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:17:12 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:41:45 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AWeapon.hpp"
#include "Enemy.hpp"

#include <string> // duh..
#include <ostream> // duh..


class Character {

public:

	Character(std::string const& name="Player");
	Character(Character const& src);
	Character& operator=(Character const& rhs);
	~Character();

	std::string	const&	getName() const;
	int					getAP() const;
	AWeapon const*		getWeapon() const;

	void				recoverHP();
	void				equip(AWeapon* weapon);
	void				attack(Enemy* enemy);


private:

	std::string	_name;
	int			_ap;
	AWeapon*	_weapon;

};

std::ostream&	operator<<(std::ostream& o, Character const& i);
