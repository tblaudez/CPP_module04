/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:42:47 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 15:39:09 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


#include <iostream>


Ice::Ice() : AMateria("ice") {

}


Ice::Ice(Ice const& src) : AMateria("ice") {

	*this = src;
}


// Overwrite the AMateria operator=() to avoid copying the type
Ice&	Ice::operator=(Ice const& rhs) {

	if (this != &rhs) {
		this->_XP = rhs._XP;
	}
	
	return *this;
}


Ice::~Ice() {

}


std::ostream&	operator<<(std::ostream& o, Ice const& i) {

	o << "Ice Materia : " << i.getXP() << " XP points" << std::endl;
	return o;
}


AMateria*	Ice::clone() const {

	return new Ice(*this);
}


void		Ice::use(ICharacter& target) {

	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
	<< std::endl;
}
