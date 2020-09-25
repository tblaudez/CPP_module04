/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:35:38 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 17:47:55 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"


PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {

}


PowerFist::PowerFist(PowerFist const& src) {

	*this = src;
}


PowerFist&	PowerFist::operator=(PowerFist const& rhs) {

	if (this != &rhs) {
		AWeapon::operator=(rhs);
	}

	return *this;
}


PowerFist::~PowerFist() {

}


std::ostream&	operator<<(std::ostream& o, PowerFist const& i) {

	o << "Power Fist : " << i.getName() << std::endl;
	return o;
}


void	PowerFist::attack(void) const {

	std::cout << "* pschhh... SBAM! *" << std::endl;
}
