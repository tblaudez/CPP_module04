/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 15:27:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/27 15:32:43 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


class ISpaceMarine {

public:

	virtual ~ISpaceMarine() {}

	virtual ISpaceMarine*	clone(void) const = 0;
	virtual void			battleCry(void) const = 0;
	virtual void			rangedAttack(void) const = 0;
	virtual void			meleeAttack(void) const = 0;

};
