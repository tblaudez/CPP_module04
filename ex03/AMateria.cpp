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


AMateria::AMateria(std::string const& type) : _type(type), _XP(0) {

}


AMateria::AMateria(AMateria const& src) {

	*this = src;
}


AMateria&	AMateria::operator=(AMateria const& rhs) {

	if (this != &rhs) {
		this->_XP = rhs._XP;
		this->_type = rhs._type;
	}

	return *this;
}


AMateria::~AMateria() {

}


std::string const&	AMateria::getType() const {

	return this->_type;
}


unsigned int		AMateria::getXP() const {

	return this->_XP;
}

void				AMateria::setXP(unsigned int XP) {

	this->_XP = XP;
}


void				AMateria::setType(std::string const& type) {

	this->_type = type;
}


void				AMateria::use(ICharacter& target) {

	(void)target;
	this->_XP += 10;
}
