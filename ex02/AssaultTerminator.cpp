/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:07:58 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 13:23:20 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

#include <iostream> // cout


AssaultTerminator::AssaultTerminator() {

	std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::AssaultTerminator(AssaultTerminator const& src) {

	std::cout << "* teleports from space *" << std::endl;
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


ISpaceMarine*	AssaultTerminator::clone() const {

	return new AssaultTerminator(*this);
}


void			AssaultTerminator::battleCry() const {

	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}


void			AssaultTerminator::rangedAttack() const {

	std::cout << "* does nothing *" << std::endl;
}


void			AssaultTerminator::meleeAttack() const {

	std::cout << "* attacks with chainfists *" << std::endl;
}
