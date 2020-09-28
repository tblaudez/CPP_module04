/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 15:35:14 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/27 16:18:13 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad() : _ceiling(50), _count(0), _units(new ISpaceMarine*[this->_ceiling]) {

}


Squad::Squad(Squad const& src) {

	*this = src;
}


Squad&	Squad::operator=(Squad const& rhs) {

	if (this != &rhs) {
		// If Squad id not empty, clear it
		if (this->_count != 0) {
			this->_clear();
		}
		// If other Squad is larger, enlarge array
		if (this->_ceiling < rhs._ceiling) {
			this->_enlargeArray(rhs._ceiling);
		}
		// Clone the units of rhs into this
		for (int i=0; i<rhs._count; i++) {
			this->_units[i] = rhs._units[i]->clone();
		}

		this->_ceiling = rhs._ceiling;
		this->_count = rhs._count;
	}

	return *this;
}


Squad::~Squad() {

	this->_clear();
	delete[] this->_units;
}


std::ostream&	operator<<(std::ostream& o, Squad const& i) {

	o << "Squad of the Emperor : " << i.getCount() << " units." << std::endl;
	return o;
}


int				Squad::getCount() const {

	return this->_count;
}


ISpaceMarine*	Squad::getUnit(int index) const {

	if (index < 0 or index >= this->_count) {
		return NULL;
	}

	return this->_units[index];
}


int				Squad::push(ISpaceMarine* unit) {

	if (unit == NULL or this->_isAlreadyInSquad(unit)) {
		return this->_count;
	}

	this->_units[this->_count] = unit;
	this->_count++;

	if (this->_count == this->_ceiling) {
		this->_enlargeArray(this->_ceiling + 50);
	}

	return this->_count;
}


bool	Squad::_isAlreadyInSquad(ISpaceMarine* unit) const {

	for (int i=0; i<this->_count; i++) {
		if (this->_units[i] == unit) {
			return true;
		}
	}
	return false;
}


void	Squad::_enlargeArray(int new_ceiling) {

	ISpaceMarine** new_array = new ISpaceMarine*[new_ceiling];

	std::copy(this->_units, this->_units + this->_count, new_array);

	delete[] this->_units;
	this->_units = new_array;

	this->_ceiling = new_ceiling;
}


void	Squad::_clear(void) {

	for (int i=0; i<this->_count; i++) {
		delete this->_units[i];
	}
	this->_count = 0;
}
