/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:21:47 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:55:59 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream> // cout


Character::Character(std::string const& name) : _name(name), _ap(40),
_weapon(NULL) {

}


Character::Character(Character const& src) {

	*this = src;
}


Character&	Character::operator=(Character const& rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_ap = rhs._ap;
		this->_weapon = rhs._weapon;
	}

	return *this;
}


Character::~Character() {

}


std::ostream&	operator<<(std::ostream& o, Character const& i) {

	o << i.getName() << " has " << i.getAP() << " AP and ";

	if (i.getWeapon() != NULL) {
		o << "wields a " << i.getWeapon()->getName() << std::endl;
	}
	else {
		o << "is unarmed" << std::endl;
	}

	return o;
}


void	Character::recoverHP() {

	this->_ap += 10;
	if (this->_ap > 40) {
		this->_ap = 40;
	}
}


void	Character::equip(AWeapon* weapon) {

	this->_weapon = weapon;
}


void	Character::attack(Enemy* enemy) {

	if (this->_weapon == NULL || this->_ap < this->_weapon->getApCost()) {
		return;
	}

	this->_ap -= this->_weapon->getApCost();

	std::cout << this->_name << " attacks " << enemy->getType() << " with a "
	<< this->_weapon->getName() << std::endl;
	this->_weapon->attack();

	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0) {
		delete enemy;
	}
}


std::string	const& Character::getName() const {

	return this->_name;
}


int			Character::getAP() const {

	return this->_ap;
}


AWeapon const*	Character::getWeapon() const {

	return this->_weapon;
}
