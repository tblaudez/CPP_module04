/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 13:14:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 13:43:29 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"


int main() {

	ISquad* vlc = new Squad;

	for (int i=0; i < 50; i++) {
		if (i % 2 == 0) {
			vlc->push(new TacticalMarine);
		}
		else {
			vlc->push(new AssaultTerminator);
		}
	}

	for (int i=0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;

	return 0;
}
