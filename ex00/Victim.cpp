/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:44 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 17:15:29 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"


Victim::Victim(std::string name) : _name(name) {

	std::cout << "Some random victim called " << this->_name
	<< " just appeared!" << std::endl;
}


Victim::Victim(Victim const& src) {

	*this = src;
	std::cout << "Some random victim called " << this->_name
	<< " just appeared!" << std::endl;
}


Victim&	Victim::operator=(Victim const& rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
	}

	return *this;
}


Victim::~Victim() {

	std::cout << "Victim " << this->_name
	<< " just died for no apparent reason!" << std::endl;
}


std::ostream&	operator<<(std::ostream& o, Victim const& i) {

	o << "I'm " << i.getName() << " and I like otters!" << std::endl;

	return o;
}


std::string	Victim::getName(void) const {

	return this->_name;
}


void		Victim::getPolymorphed(void) const {

	std::cout << this->_name << " has been turned into a cute little sheep!"
	<< std::endl;
}
