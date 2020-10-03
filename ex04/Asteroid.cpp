/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Asteroid.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:36:50 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 16:57:09 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Asteroid.hpp"

#include <iostream>


Asteroid::Asteroid() {

}


Asteroid::Asteroid(Asteroid const& src) {

	*this = src;
}


Asteroid&	Asteroid::operator=(Asteroid const& rhs) {

	if (this != &rhs) {
		/* Do things */
	}

	return *this;
}


Asteroid::~Asteroid() {

}


std::ostream&	operator<<(std::ostream& o, Asteroid const& i) {

	o << i.getName() << std::endl;
	return o;
}


std::string	Asteroid::beMined(StripMiner* miner) const {

	(void)miner;
	return "Flavium";
}


std::string	Asteroid::beMined(DeepCoreMiner* miner) const {

	(void)miner;
	return "Dragonite";
}


std::string	Asteroid::getName() const {

	return "Asteroid";
}
