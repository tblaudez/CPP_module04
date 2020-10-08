/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:06:03 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:26:14 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Enemy.hpp"


class RadScorpion : public Enemy {

public:

	RadScorpion();
	RadScorpion(RadScorpion const& src);
	RadScorpion& operator=(RadScorpion const& rhs);
	virtual ~RadScorpion();

};
