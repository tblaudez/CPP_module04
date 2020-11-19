/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:00:13 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:59:23 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ISpaceMarine.hpp"


class TacticalMarine : public ISpaceMarine {

public:

    TacticalMarine();

    TacticalMarine(TacticalMarine const &src);

    TacticalMarine &operator=(TacticalMarine const &rhs);

    virtual ~TacticalMarine();

    virtual ISpaceMarine *clone() const;

    virtual void battleCry() const;

    virtual void rangedAttack() const;

    virtual void meleeAttack() const;

};
