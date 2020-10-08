/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:37:56 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:56:28 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

#include <iostream> // cout


int main(void) {

	Character*	me = new Character("Henry");
	AWeapon*	pr = new PlasmaRifle();
	AWeapon*	pf = new PowerFist();

	Enemy*		a = new SuperMutant();
	Enemy*		b = new RadScorpion();

	std::cout << *me;
	me->equip(pr);
	std::cout << *me;

	me->attack(a);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete me;
	delete pr;
	delete pf;
	delete a;


	/*
	**	Deleting b causes a segfault since we deleted it in the attack()'s Character
	**	member function. Which is stupid.
	*/

	// delete b;

	return 0;
}
