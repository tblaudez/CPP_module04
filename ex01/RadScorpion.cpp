/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:06:52 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 18:08:25 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"


RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {

	std::cout << "* click click click *" << std::endl;
}


RadScorpion::RadScorpion(RadScorpion const& src) {

	*this = src;
	std::cout << "* click click click *" << std::endl;
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


std::ostream&	operator<<(std::ostream& o, RadScorpion const& i) {

	o << "RadScorpion : " << i.getType() << std::endl; 
	return o;
}
