/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StripMiner.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:27:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 17:00:31 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IMiningLaser.hpp"

#include <iostream>


class StripMiner : public IMiningLaser {

public:

	StripMiner();
	StripMiner(StripMiner const& src);
	StripMiner& operator=(StripMiner const& rhs);
	~StripMiner();

	virtual void	mine(IAsteroid* target);

};

std::ostream&	operator<<(std::ostream& o, StripMiner const& i);
