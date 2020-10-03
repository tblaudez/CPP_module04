/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:07:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 13:19:09 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"


#include <iostream>


AssaultTerminator::AssaultTerminator() {

	std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::AssaultTerminator(AssaultTerminator const& src) {

	*this = src;
}


AssaultTerminator&	AssaultTerminator::operator=(AssaultTerminator const& rhs) {

	if (this != &rhs) {
		/* Do things */
	}

	return *this;
}


AssaultTerminator::~AssaultTerminator() {

	std::cout << "I’ll be back..." << std::endl;
}


std::ostream&	operator<<(std::ostream& o, AssaultTerminator const& i) {

	(void)i;
	o << "AssaultTerminator, ready for battle" << std::endl;
	return o;
}


ISpaceMarine*	AssaultTerminator::clone(void) const {

	return new AssaultTerminator(*this);
}


void			AssaultTerminator::battleCry(void) const {

	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}


void			AssaultTerminator::rangedAttack(void) const {

	std::cout << " does nothing *" << std::endl;
}


void			AssaultTerminator::meleeAttack(void) const {

	std::cout << "* attacks with chainfists *" << std::endl;
}
