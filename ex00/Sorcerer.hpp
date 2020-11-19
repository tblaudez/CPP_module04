/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:42 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:02:54 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Victim.hpp"

#include <string> // duh..
#include <ostream> // duh..


class Sorcerer {

public:

    Sorcerer(std::string const &name, std::string const &title);

    Sorcerer(Sorcerer const &src);

    Sorcerer &operator=(Sorcerer const &rhs);

    ~Sorcerer();

    std::string getName() const;

    std::string getTitle() const;

    void polymorph(Victim const &target) const;

private:

    Sorcerer();

    std::string _name;
    std::string _title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &i);
