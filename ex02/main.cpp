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

    Squad *vlc = new Squad;

    for (int i = 0; i < 62; i++) {
        if (i % 2 == 0) {
            vlc->push(new TacticalMarine);
        } else {
            vlc->push(new AssaultTerminator);
        }
    }

    Squad *firstLegion = new Squad;
    *firstLegion = *vlc;
    delete vlc;

    for (int i = 0; i < firstLegion->getCount(); ++i) {
        ISpaceMarine *cur = firstLegion->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete firstLegion;

    return 0;
}
