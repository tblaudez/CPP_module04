/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:30 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:56:05 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

#include <iostream> // cout


Peon::Peon(std::string const& name) : Victim(name) {

	std::cout << "Zog zog." << std::endl;
}


Peon::Peon(Peon const& src) {

	std::cout << "Zog zog." << std::endl;
	*this = src;
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
