/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Comet.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:32:35 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 16:33:33 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IAsteroid.hpp"

#include <iostream>


class Comet : public IAsteroid {

public:

	Comet();
	Comet(Comet const& src);
	Comet& operator=(Comet const& rhs);
	~Comet();

	virtual std::string	beMined(StripMiner* miner) const;
	virtual std::string	beMined(DeepCoreMiner* miner) const;
	virtual std::string	getName() const;

};

std::ostream&	operator<<(std::ostream& o, Comet const& i);
