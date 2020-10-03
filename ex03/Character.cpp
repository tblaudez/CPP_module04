/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:08:43 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 16:17:07 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>


Character::Character(std::string name) : _name(name), _inventory(new AMateria*[4]()) {

}


Character::Character(Character const& src) {

	*this = src;
}


Character&	Character::operator=(Character const& rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;

		if (this->_characterHasEquipedMateria()) {
			this->_clear();
		}
		for (int i=0; i<4; i++) {
			if (rhs._inventory[i] != NULL) {
				this->_inventory[i] = rhs._inventory[i]->clone();
			}
		}
	}

	return *this;
}


Character::~Character() {

	this->_clear();
	delete[] this->_inventory;
}


std::ostream&	operator<<(std::ostream& o, Character const& i) {

	o << "Character named " << i.getName() << std::endl;
	return o;
}


std::string const&	Character::getName() const {

	return this->_name;
}


void				Character::equip(AMateria* m) {

	for (int i=0; i<4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return;
		}
	}
}


void				Character::unequip(int idx) {

	if (idx < 0 or idx >= 4) {
		return;
	}

	this->_inventory[idx] = NULL;
}


void				Character::use(int idx, ICharacter& target) {

	if (idx < 0 or idx >= 4 or this->_inventory[idx] == NULL) {
		return;
	}

	this->_inventory[idx]->use(target);
}


void				Character::_clear() {

	for (int i=0; i<4; i++) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

bool				Character::_characterHasEquipedMateria() const {

	for (int i=0; i<4; i++) {
		if (this->_inventory[i] != NULL) {
			return true;
		}
	}
	return false;
}
