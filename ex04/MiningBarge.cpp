/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MiningBarge.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:41:42 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:36:13 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

#include <cstring> // memcpy


MiningBarge::MiningBarge() : _lasers(new IMiningLaser *[4]()) {

}


MiningBarge::MiningBarge(MiningBarge const &src) : _lasers(new IMiningLaser *[4]()) {

    *this = src;
}


MiningBarge &MiningBarge::operator=(MiningBarge const &rhs) {

    if (this != &rhs) {

        // If lasers are not empty, clear them first
        if (!this->_empty()) {
            this->_clear();
        }

        // Deep copy the lasers
        for (int i = 0; i < 4; i++) {
        	IMiningLaser *laser = rhs._lasers[i];
			this->_lasers[i] = laser ? laser->clone() : NULL;
        }
    }

    return *this;
}


MiningBarge::~MiningBarge() {

    this->_clear();
    delete[] this->_lasers;
}


void MiningBarge::equip(IMiningLaser *laser) {

    for (int i = 0; i < 4; i++) {
        if (this->_lasers[i] == NULL) {
            this->_lasers[i] = laser;
            return;
        }
    }
}


void MiningBarge::mine(IAsteroid *target) const {

    for (int i = 0; i < 4; i++) {
        if (this->_lasers[i] != NULL) {
            this->_lasers[i]->mine(target);
        }
    }
}


void MiningBarge::_clear() {

    for (int i = 0; i < 4; i++) {
        delete this->_lasers[i];
        this->_lasers[i] = NULL;
    }
}


bool MiningBarge::_empty() const {

    for (int i = 0; i < 4; i++) {
        if (this->_lasers[i] != NULL) {
            return false;
        }
    }

    return true;
}
