/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:00:29 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 18:44:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

#include <iostream>


class SuperMutant : public Enemy {

public:

	SuperMutant();
	SuperMutant(SuperMutant const& src);
	SuperMutant& operator=(SuperMutant const& rhs);
	virtual ~SuperMutant();

	virtual void takeDamage(int damage);

};

std::ostream&	operator<<(std::ostream& o, SuperMutant const& i);
