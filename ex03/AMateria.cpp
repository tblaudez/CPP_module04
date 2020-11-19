/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:37:37 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:56:54 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream> // cout


AMateria::AMateria(std::string const &type) : _type(type), _experience_points(0) {

}


AMateria::AMateria(AMateria const &src) : _experience_points(0) {

    *this = src;
}


AMateria &AMateria::operator=(AMateria const &rhs) {

    if (this != &rhs) {
        this->_experience_points = rhs._experience_points;
        this->_type = rhs._type;
    }

    return *this;
}


AMateria::~AMateria() {

}


std::string const &AMateria::getType() const {

    return this->_type;
}


unsigned int AMateria::getXP() const {

    return this->_experience_points;
}

void AMateria::setXP(unsigned int XP) {

    this->_experience_points = XP;
}


void AMateria::setType(std::string const &type) {

    this->_type = type;
}


void AMateria::use(ICharacter &) {

    this->_experience_points += 10;
}
