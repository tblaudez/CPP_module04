/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peasant.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/18 13:18:24 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/11/18 13:18:24 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peasant.hpp"

#include <iostream>


Peasant::Peasant(const std::string &name) : Victim(name) {
    std::cout << this->getName() << " is born to work in the fields" << std::endl;
}

Peasant::~Peasant() {
    std::cout << this->getName() << " died from the Pest" << std::endl;
}

Peasant::Peasant(const Peasant &src) {
    *this = src;
}

Peasant &Peasant::operator=(const Peasant &rhs) {
    if (this != &rhs) {
        /* Do things */
    }

    return *this;
}

void Peasant::getPolymorphed() const {
    std::cout << this->getName() << "got turned into a cute little moth" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Peasant &i) {
    os << "I'm " << i.getName() << " and I like frogs !" << std::endl;
    return os;
}
