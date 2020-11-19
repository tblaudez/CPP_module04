/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StripMiner.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:27:37 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:42:58 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

#include <iostream> // cout


StripMiner::StripMiner() {

}


StripMiner::StripMiner(StripMiner const &src) {

	*this = src;
}


StripMiner &StripMiner::operator=(StripMiner const &rhs) {

	if (this != &rhs) {
		/* Do things */
	}

	return *this;
}


StripMiner::~StripMiner() {

}


void StripMiner::mine(IAsteroid *target) {

	std::cout << "* strip mining... got " << target->beMined(this) << "! *"
			  << std::endl;
}

IMiningLaser *StripMiner::clone() const {
	return new StripMiner(*this);
}
