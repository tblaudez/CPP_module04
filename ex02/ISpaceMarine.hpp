/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 15:27:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:54:44 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


class ISpaceMarine {

public:

    virtual ~ISpaceMarine() {}

    virtual ISpaceMarine *clone() const = 0;

    virtual void battleCry() const = 0;

    virtual void rangedAttack() const = 0;

    virtual void meleeAttack() const = 0;

};
