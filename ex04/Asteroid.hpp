/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Asteroid.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:36:03 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 17:04:51 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IAsteroid.hpp"

#include <iostream>


class Asteroid : public IAsteroid {

public:

	Asteroid();
	Asteroid(Asteroid const& src);
	Asteroid& operator=(Asteroid const& rhs);
	~Asteroid();

	virtual std::string	beMined(StripMiner* miner) const;
	virtual std::string	beMined(DeepCoreMiner* miner) const;
	virtual std::string	getName() const;

};

std::ostream&	operator<<(std::ostream& o, Asteroid const& i);
