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


int main() {

    Character *character = new Character("Henry");
    Enemy *superMutant = new SuperMutant;
    Enemy *radScorpion = new RadScorpion;

    std::cout << "----------" << std::endl;

    AWeapon *powerFist = new PowerFist;
    character->equip(powerFist);
    character->attack(superMutant);
    character->attack(radScorpion);

    std::cout << "----------" << std::endl;

    AWeapon *plasmaRifle = new PlasmaRifle;
    character->equip(plasmaRifle);
    character->attack(superMutant);
    character->attack(radScorpion);
    character->attack(radScorpion);

    std::cout << "----------" << std::endl;

    character->attack(superMutant);
    character->attack(superMutant);
    character->attack(superMutant);

    character->recoverHP();

    std::cout << "----------" << std::endl;

    delete powerFist;
    delete plasmaRifle;
    delete superMutant;
    delete character;

     /* If we delete radScorpion, we get a double-free because
     it was already deleted when it's HP got to 0 */
//    delete radScorpion;


    return 0;
}
