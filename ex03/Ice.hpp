/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:41:35 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 13:49:51 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AMateria.hpp"


class Ice : public AMateria {

public:

    Ice();

    Ice(Ice const &src);

    Ice &operator=(Ice const &rhs);

    virtual ~Ice();

    virtual AMateria *clone() const;

    virtual void use(ICharacter &target);

};
