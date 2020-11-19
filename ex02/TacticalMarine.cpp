/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:01:44 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 13:09:22 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

#include <iostream> // cout


TacticalMarine::TacticalMarine() {

    std::cout << "Tactical Marine ready for battle!" << std::endl;
}


TacticalMarine::TacticalMarine(TacticalMarine const &src) {

    std::cout << "Tactical Marine ready for battle!" << std::endl;
    *this = src;
}


TacticalMarine &TacticalMarine::operator=(TacticalMarine const &rhs) {

    if (this != &rhs) {
        /* Do things */
    }

    return *this;
}


TacticalMarine::~TacticalMarine() {

    std::cout << "Aaargh..." << std::endl;
}


ISpaceMarine *TacticalMarine::clone() const {

    return new TacticalMarine(*this);
}


void TacticalMarine::battleCry() const {

    std::cout << "For the holy PLOT!" << std::endl;
}


void TacticalMarine::rangedAttack() const {


    std::cout << "* attacks with a bolter *" << std::endl;
}


void TacticalMarine::meleeAttack() const {

    std::cout << "* attacks with a chainsword *" << std::endl;
}
