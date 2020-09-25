/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:06:03 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 18:44:00 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

#include <iostream>


class RadScorpion : public Enemy {

public:

	RadScorpion();
	RadScorpion(RadScorpion const& src);
	RadScorpion& operator=(RadScorpion const& rhs);
	virtual ~RadScorpion();

};

std::ostream&	operator<<(std::ostream& o, RadScorpion const& i);
