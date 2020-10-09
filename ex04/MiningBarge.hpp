/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MiningBarge.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:39:52 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:30:02 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"


class MiningBarge {

public:

	MiningBarge();
	MiningBarge(MiningBarge const& src);
	MiningBarge& operator=(MiningBarge const& rhs);
	~MiningBarge();

	void	equip(IMiningLaser* laser);
	void	mine(IAsteroid* target) const;

private:

	bool			_empty() const;
	void			_clear();

	IMiningLaser**	_lasers;

};
