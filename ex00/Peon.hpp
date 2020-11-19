/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:36 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:54:54 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Victim.hpp"

#include <string> // duh..
#include <ostream> // duh..


class Peon : public Victim {

public:

    Peon(std::string const &name = "Peon");

    Peon(Peon const &src);

    Peon &operator=(Peon const &rhs);

    virtual ~Peon();

    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, const Peon &i);
