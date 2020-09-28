/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:01:44 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 13:16:55 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"


#include <iostream>


TacticalMarine::TacticalMarine() {

	std::cout << "Tactical Marine ready for battle!" << std::endl;
}


TacticalMarine::TacticalMarine(TacticalMarine const& src) {

	*this = src;
}


TacticalMarine&	TacticalMarine::operator=(TacticalMarine const& rhs) {

	if (this != &rhs) {
		/* Do things */
	}

	return *this;
}


TacticalMarine::~TacticalMarine() {

	std::cout << "Aaargh..." << std::endl;
}


std::ostream&	operator<<(std::ostream& o, TacticalMarine const& i) {

	(void)i;
	o << "TacticalMarine, ready for action" << std::endl;
	return o;
}


ISpaceMarine*	TacticalMarine::clone(void) const {

	return new TacticalMarine(*this);
}


void			TacticalMarine::battleCry(void) const {

	std::cout << "For the holy PLOT!" << std::endl;
}


void			TacticalMarine::rangedAttack(void) const {


	std::cout << "* attacks with a bolter *" << std::endl;
}


void			TacticalMarine::meleeAttack(void) const {

	std::cout << "* attacks with a chainsword *" << std::endl;
}
