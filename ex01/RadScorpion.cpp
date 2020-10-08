/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:06:52 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:40:27 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

#include <iostream> // cout


RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {

	std::cout << "* click click click *" << std::endl;
}


RadScorpion::RadScorpion(RadScorpion const& src) {

	std::cout << "* click click click *" << std::endl;
	*this = src;
}


RadScorpion&	RadScorpion::operator=(RadScorpion const& rhs) {

	if (this != &rhs) {
		Enemy::operator=(rhs);
	}

	return *this;
}


RadScorpion::~RadScorpion() {

	std::cout << "* SPROTCH *" << std::endl;
}
