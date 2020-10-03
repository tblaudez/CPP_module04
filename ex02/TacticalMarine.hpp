/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:00:13 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 13:01:42 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"

#include <iostream>


class TacticalMarine : public ISpaceMarine {

public:

	TacticalMarine();
	TacticalMarine(TacticalMarine const& src);
	TacticalMarine&	operator=(TacticalMarine const& rhs);
	~TacticalMarine();

	virtual ISpaceMarine*	clone(void) const;
	virtual void			battleCry(void) const;
	virtual void			rangedAttack(void) const;
	virtual void			meleeAttack(void) const;

};

std::ostream&	operator<<(std::ostream& o, TacticalMarine const& i);
