/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:23:03 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:39:35 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

#include <iostream> // cout


AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
        _name(name), _apcost(apcost), _damage(damage) {

}


AWeapon::AWeapon(AWeapon const &src) {

    *this = src;
}


AWeapon &AWeapon::operator=(AWeapon const &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;
        this->_damage = rhs._damage;
        this->_apcost = rhs._apcost;
    }

    return *this;
}


AWeapon::~AWeapon() {

}


int AWeapon::getApCost() const {

    return this->_apcost;
}


int AWeapon::getDamage() const {

    return this->_damage;
}


std::string const &AWeapon::getName() const {

    return this->_name;
}
