/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:44 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:55:47 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

#include <iostream> // cout


Victim::Victim(std::string const &name) : _name(name) {

    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &src) {

    std::cout << "Some random victim called " << src._name << " just appeared!" << std::endl;
    *this = src;
}

Victim &Victim::operator=(Victim const &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;
    }

    return *this;
}

Victim::~Victim() {

    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const {

    return this->_name;
}

void Victim::getPolymorphed() const {

    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &i) {
    os << "I'm " << i.getName() << " and I like otters!" << std::endl;
    return os;
}
