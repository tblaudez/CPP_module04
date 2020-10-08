/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:00:29 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:24:35 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Enemy.hpp"


class SuperMutant : public Enemy {

public:

	SuperMutant();
	SuperMutant(SuperMutant const& src);
	SuperMutant& operator=(SuperMutant const& rhs);
	virtual ~SuperMutant();

	virtual void takeDamage(int damage);

};
