/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:56:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:49:18 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream> // cout


Cure::Cure() : AMateria("cure") {

}


Cure::Cure(Cure const& src) : AMateria(src) {

	*this = src;
}


Cure&	Cure::operator=(Cure const& rhs) {

	// Override of the AMateria operator<< to avoid copying the type
	if (this != &rhs) {
		this->setXP(rhs.getXP());
	}

	return *this;
}


Cure::~Cure() {

}


AMateria*	Cure::clone() const {

	return new Cure(*this);
}


void		Cure::use(ICharacter& target) {

	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
