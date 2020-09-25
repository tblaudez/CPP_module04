/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:30 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 17:15:12 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"


Peon::Peon(std::string name) : Victim(name) {

	std::cout << "Zog zog." << std::endl;
}


Peon::Peon(Peon const& src) {

	*this = src;
	std::cout << "Zog zog." << std::endl;
}


Peon&	Peon::operator=(Peon const& rhs) {

	if (this != &rhs) {
		Victim::operator=(rhs);
	}

	return *this;
}


Peon::~Peon() {

	std::cout << "Bleuark..." << std::endl;
}


void	Peon::getPolymorphed() const {

	std::cout << this->_name << " has been turned into a pink pony!"
	<< std::endl;
}
