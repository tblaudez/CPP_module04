/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMiningLaser.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:23:20 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 17:03:45 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IAsteroid.hpp"


class IMiningLaser {

public:

	virtual ~IMiningLaser() {}

	virtual void	mine(IAsteroid* target) = 0;

};
