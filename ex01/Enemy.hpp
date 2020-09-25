/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:49:44 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 18:43:52 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class Enemy {

public:

	Enemy(int hp=0, std::string const& type="default");
	Enemy(Enemy const& src);
	Enemy& operator=(Enemy const& rhs);
	virtual ~Enemy();

	std::string	getType(void) const;
	int			getHP(void) const;

	virtual void	takeDamage(int damage);

protected:

	int				_HP;
	std::string		_type;
};

std::ostream&	operator<<(std::ostream& o, Enemy const& i);
