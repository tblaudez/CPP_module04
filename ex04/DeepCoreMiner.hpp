/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DeepCoreMiner.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:24:32 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 17:00:14 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IMiningLaser.hpp"

#include <iostream>


class DeepCoreMiner : public IMiningLaser {

public:

	DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner const& src);
	DeepCoreMiner& operator=(DeepCoreMiner const& rhs);
	~DeepCoreMiner();

	virtual void	mine(IAsteroid* target);

};

std::ostream&	operator<<(std::ostream& o, DeepCoreMiner const& i);
