/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:06:56 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 13:07:52 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"

#include <iostream>


class AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const& src);
	AssaultTerminator&	operator=(AssaultTerminator const& rhs);
	~AssaultTerminator();

	virtual ISpaceMarine*	clone(void) const;
	virtual void			battleCry(void) const;
	virtual void			rangedAttack(void) const;
	virtual void			meleeAttack(void) const;

};

std::ostream&	operator<<(std::ostream& o, AssaultTerminator const& i);
