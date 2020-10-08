/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:52:30 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:55:10 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

#include <iostream> // cout


Enemy::Enemy(int hp, std::string const& type) : _HP(hp), _type(type) {

}


Enemy::Enemy(Enemy const& src) {

	*this = src;
}


Enemy&	Enemy::operator=(Enemy const& rhs) {

	if (this != &rhs) {
		this->_type = rhs._type;
		this->_HP = rhs._HP;
	}

	return *this;
}


Enemy::~Enemy() {

}


std::string	const& Enemy::getType() const {

	return this->_type;
}


int			Enemy::getHP() const {

	return this->_HP;
}


void	Enemy::takeDamage(int damage) {

	std::cout << this->_type << " is taking damage" << std::endl;

	if (damage < 0) {
		return;
	}

	this->_HP -= damage;
	if (this->_HP < 0) {
		this->_HP = 0;
	}
}
