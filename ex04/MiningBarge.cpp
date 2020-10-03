/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MiningBarge.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:41:42 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 17:04:03 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

#include <iostream>


MiningBarge::MiningBarge() : _lasers(new IMiningLaser*[4]()) {

}


MiningBarge::MiningBarge(MiningBarge const& src) : _lasers(new IMiningLaser*[4]()) {

	*this = src;
}


MiningBarge&	MiningBarge::operator=(MiningBarge const& rhs) {

	if (this != &rhs) {
		std::copy(rhs._lasers, rhs._lasers + 4, this->_lasers);
	}

	return *this;
}


MiningBarge::~MiningBarge() {

	delete[] this->_lasers;
}


std::ostream&	operator<<(std::ostream& o, MiningBarge const& i) {

	(void)i;
	o << "MiningBarge" << std::endl;
	return o;
}


void	MiningBarge::equip(IMiningLaser* laser) {

	for (int i=0; i<4; i++) {
		if (this->_lasers[i] == NULL) {
			this->_lasers[i] = laser;
			return;
		}
	}
}


void	MiningBarge::mine(IAsteroid* target) const {

	for (int i=0; i<4; i++) {
		if (this->_lasers[i] != NULL) {
			this->_lasers[i]->mine(target);
		}
	}
}
