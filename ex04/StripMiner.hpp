/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StripMiner.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:27:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:17:36 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IMiningLaser.hpp"


class StripMiner : public IMiningLaser {

public:

	StripMiner();
	StripMiner(StripMiner const& src);
	StripMiner& operator=(StripMiner const& rhs);
	virtual ~StripMiner();

	virtual void	mine(IAsteroid* target);

};
