/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:31:27 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:16:10 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

#include <iostream> // cout


PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {

}


PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {

    *this = src;
}


PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {

    if (this != &rhs) {
        AWeapon::operator=(rhs);
    }

    return *this;
}


PlasmaRifle::~PlasmaRifle() {

}


void PlasmaRifle::attack() const {

    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
