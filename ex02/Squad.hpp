/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 15:32:52 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 13:18:20 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISquad.hpp"

#include <iostream>


class Squad : public ISquad {

public:

	Squad();
	Squad(Squad const& src);
	Squad& operator=(Squad const& rhs);
	~Squad();

	virtual int				getCount() const;
	virtual	ISpaceMarine*	getUnit(int index) const;
	virtual int				push(ISpaceMarine* unit);

private:

	bool	_isAlreadyInSquad(ISpaceMarine* unit) const;
	void	_enlargeArray(int new_ceiling);
	void	_clear(void);

	int				_ceiling;
	int				_count;
	ISpaceMarine**	_units;

};

std::ostream&	operator<<(std::ostream& o, Squad const& i);
