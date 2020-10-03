/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DeepCoreMiner.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:25:05 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 16:57:53 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

#include <iostream>


DeepCoreMiner::DeepCoreMiner() {

}


DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const& src) {

	*this = src;
}


DeepCoreMiner&	DeepCoreMiner::operator=(DeepCoreMiner const& rhs) {

	if (this != &rhs) {
		/* Do things */
	}

	return *this;
}


DeepCoreMiner::~DeepCoreMiner() {

}


std::ostream&	operator<<(std::ostream& o, DeepCoreMiner const& i) {

	(void)i;
	o << "DeepCoreMiner" << std::endl;
	return o;
}


void		DeepCoreMiner::mine(IAsteroid* target) {

	std::cout << "* mining deep... got " << target->beMined(this) << "! *"
	<< std::endl;
}
