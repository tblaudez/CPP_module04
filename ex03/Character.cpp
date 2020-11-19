/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:08:43 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:56:48 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream> // cout


Character::Character(const std::string &name) : _name(name), _inventory(new AMateria *[4]()) {

    std::cout << "Hey, the name's " << name << std::endl;
}


Character::Character(Character const &src) : _inventory(new AMateria *[4]()) {

    std::cout << "Hey, the name's " << src._name << std::endl;
    *this = src;
}


Character &Character::operator=(Character const &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;

        // If Character inventory is not empty, clear it
        if (this->_characterHasEquipedMateria()) {
            this->_clear();
        }

        for (int i = 0; i < 4; i++) {
            if (rhs._inventory[i] != NULL) {
                this->_inventory[i] = rhs._inventory[i]->clone();
            }
        }
    }

    return *this;
}


Character::~Character() {

    std::cout << "Urgh.. " << this->_name << " died." << std::endl;
    this->_clear();
    delete[] this->_inventory;
}


std::string const &Character::getName() const {

    return this->_name;
}


void Character::equip(AMateria *materia) {

    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] == NULL) {
            this->_inventory[i] = materia;
            return;
        }
    }
}


void Character::unequip(int idx) {

    if (idx < 0 || idx >= 4) {
        return;
    }

    this->_inventory[idx] = NULL;
}


void Character::use(int idx, ICharacter &target) {

    if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL) {
        return;
    }

    std::cout << this->_name << " uses " << this->_inventory[idx]->getType() << " materia on " << target.getName()
              << std::endl;
    this->_inventory[idx]->use(target);
}


void Character::_clear() {

    for (int i = 0; i < 4; i++) {
        delete this->_inventory[i];
        this->_inventory[i] = NULL;
    }
}


bool Character::_characterHasEquipedMateria() const {

    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] != NULL) {
            return true;
        }
    }
    return false;
}
