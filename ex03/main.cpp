/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 14:49:39 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:53:42 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main() {

    MateriaSource *src = new MateriaSource;
    src->learnMateria(new Ice);
    src->learnMateria(new Cure);

    std::cout << "----------" << std::endl;

    MateriaSource *real_source = new MateriaSource;
    *real_source = *src;
    delete src;

    std::cout << "----------" << std::endl;

    ICharacter *me = new Character("Claude");
    ICharacter *bob = new Character("Dummy");

    std::cout << "----------" << std::endl;

    AMateria *tmp;
    tmp = real_source->createMateria("ice");
    me->equip(tmp);
    tmp = real_source->createMateria("cure");
    me->equip(tmp);

    std::cout << "----------" << std::endl;

    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "----------" << std::endl;

    delete bob;
    delete me;
    delete real_source;

    return 0;

}
