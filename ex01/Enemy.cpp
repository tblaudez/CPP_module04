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


Enemy::Enemy(int hp, std::string const &type) : _health(hp), _type(type) {

}


Enemy::Enemy(Enemy const &src) {

    *this = src;
}


Enemy &Enemy::operator=(Enemy const &rhs) {

    if (this != &rhs) {
        this->_type = rhs._type;
        this->_health = rhs._health;
    }

    return *this;
}


Enemy::~Enemy() {

}


std::string const &Enemy::getType() const {

    return this->_type;
}


int Enemy::getHP() const {

    return this->_health;
}


void Enemy::takeDamage(int damage) {

    std::cout << this->_type << " took " << damage << " points of damage" << std::endl;

    if (damage < 0) {
        return;
    }

    this->_health -= damage;
    if (this->_health <= 0) {
        std::cout << this->_type << " is dead" << std::endl;
        delete this;
    } else {
        std::cout << this->_type << " now has " << this->_health << " HP" << std::endl;
    }
}
