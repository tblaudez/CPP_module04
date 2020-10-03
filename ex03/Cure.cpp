/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:56:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 14:02:52 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


#include <iostream>


Cure::Cure() : AMateria("cure") {

}


Cure::Cure(Cure const& src) : AMateria("cure") {

	*this = src;
}


// Overwrite the AMateria operator=() to avoid copying the type
Cure&	Cure::operator=(Cure const& rhs) {

	if (this != &rhs) {
		this->_XP = rhs._XP;
	}

	return *this;
}


Cure::~Cure() {

}


std::ostream&	operator<<(std::ostream& o, Cure const& i) {

	o << "Cure Materia : " << i.getXP() << " XP points" << std::endl;
	return o;
}


AMateria*	Cure::clone() const {

	return new Cure(*this);
}


void		Cure::use(ICharacter& target) {

	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
