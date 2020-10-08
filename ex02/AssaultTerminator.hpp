/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:06:56 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:59:00 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ISpaceMarine.hpp"


class AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const& src);
	AssaultTerminator&	operator=(AssaultTerminator const& rhs);
	virtual ~AssaultTerminator();

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;

};
