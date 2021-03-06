/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:47:13 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:55:41 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

#include <iostream> // cout


int main() {

    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");
    Peasant jeremy("Jeremy");

    std::cout << robert << jim << joe << jeremy;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(jeremy);

    return 0;
}
