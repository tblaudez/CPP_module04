/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:35:38 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:39:48 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

#include <iostream> // cout


PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {

}


PowerFist::PowerFist(PowerFist const &src) {

    *this = src;
}


PowerFist &PowerFist::operator=(PowerFist const &rhs) {

    if (this != &rhs) {
        AWeapon::operator=(rhs);
    }

    return *this;
}


PowerFist::~PowerFist() {

}


void PowerFist::attack() const {

    std::cout << "* pschhh... SBAM! *" << std::endl;
}
