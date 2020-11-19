/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:42:47 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:57:19 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream> // cout


Ice::Ice() : AMateria("ice") {

}


Ice::Ice(Ice const &src) : AMateria(src) {

    *this = src;
}


Ice &Ice::operator=(Ice const &rhs) {

    // Override of the AMateria operator<< to avoid copying the type
    if (this != &rhs) {
        this->setXP(rhs.getXP());
    }

    return *this;
}


Ice::~Ice() {

}


AMateria *Ice::clone() const {

    return new Ice(*this);
}


void Ice::use(ICharacter &target) {

    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"
              << std::endl;
}
