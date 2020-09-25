/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:02:50 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 18:16:25 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"


SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}


SuperMutant::SuperMutant(SuperMutant const& src) {

	*this = src;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}


SuperMutant&	SuperMutant::operator=(SuperMutant const& rhs) {

	if (this != &rhs) {
		Enemy::operator=(rhs);
	}

	return *this;
}


SuperMutant::~SuperMutant() {

	std::cout << "Aaargh..." << std::endl;
}


std::ostream&	operator<<(std::ostream& o, SuperMutant const& i) {

	o << "SuperMutant : " << i.getType() << std::endl;
	return o;
}


void	SuperMutant::takeDamage(int damage) {

	Enemy::takeDamage(damage - 3);
	std::cout << this->_type << " reduced the damage" << std::endl;
}
