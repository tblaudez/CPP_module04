/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DeepCoreMiner.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:25:05 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:43:03 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

#include <iostream> // cout


DeepCoreMiner::DeepCoreMiner() {

}


DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &src) {

	*this = src;
}


DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const &rhs) {

	if (this != &rhs) {
		/* Do things */
	}

	return *this;
}


DeepCoreMiner::~DeepCoreMiner() {

}


void DeepCoreMiner::mine(IAsteroid *target) {

	std::cout << "* mining deep... got " << target->beMined(this) << "! *" << std::endl;
}

IMiningLaser *DeepCoreMiner::clone() const {
	return new DeepCoreMiner(*this);
}
