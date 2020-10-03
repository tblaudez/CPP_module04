/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   StripMiner.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:27:37 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 16:58:09 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

#include <iostream>


StripMiner::StripMiner() {

}


StripMiner::StripMiner(StripMiner const& src) {

	*this = src;
}


StripMiner&	StripMiner::operator=(StripMiner const& rhs) {

	if (this != &rhs) {
		/* Do things */
	}

	return *this;
}


StripMiner::~StripMiner() {

}


std::ostream&	operator<<(std::ostream& o, StripMiner const& i) {

	(void)i;
	o << "StripMiner" << std::endl;
	return o;
}


void	StripMiner::mine(IAsteroid* target) {

	std::cout << "* strip mining... got " << target->beMined(this) << "! *"
	<< std::endl;
}
