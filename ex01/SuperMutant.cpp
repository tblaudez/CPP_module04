/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 18:02:50 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:56:13 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

#include <iostream> // cout


SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}


SuperMutant::SuperMutant(SuperMutant const& src) {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	*this = src;
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


void	SuperMutant::takeDamage(int damage) {

	Enemy::takeDamage(damage - 3);
}
