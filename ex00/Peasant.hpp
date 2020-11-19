/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peasant.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/18 13:14:23 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/11/18 13:14:23 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Victim.hpp"

#include <string>
#include <ostream>


class Peasant : public Victim {

public:
    Peasant(const std::string &name = "Peasant");

    Peasant(const Peasant &src);

    Peasant &operator=(const Peasant &rhs);

    virtual ~Peasant();

    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Peasant &i);