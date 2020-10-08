/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 15:18:09 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:50:47 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ISpaceMarine.hpp"


class ISquad {

public:

	virtual ~ISquad() {}

	virtual int				getCount() const = 0;
	virtual	ISpaceMarine*	getUnit(int index) const = 0;
	virtual int				push(ISpaceMarine* unit) = 0;

};
