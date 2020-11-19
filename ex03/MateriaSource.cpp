/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:33:09 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:35:59 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>


MateriaSource::MateriaSource() : _materiaPool(new AMateria *[4]()) {

    std::cout << "A Materia Source Arise" << std::endl;
}


MateriaSource::MateriaSource(MateriaSource const &src) : _materiaPool(new AMateria *[4]()) {

    std::cout << "A Materia Source Arise" << std::endl;
    *this = src;
}


MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {

    if (this != &rhs) {

        // If Source is not empty, clear it
        if (!this->_empty()) {
            this->_clear();
        }

        for (int i = 0; i < 4; i++) {
            AMateria *materia = rhs._materiaPool[i];
            this->_materiaPool[i] = materia ? materia->clone() : NULL;
        }
    }

    return *this;
}


MateriaSource::~MateriaSource() {

    std::cout << "A Materia Source darkens" << std::endl;
    this->_clear();
    delete[] this->_materiaPool;
}


void MateriaSource::learnMateria(AMateria *materia) {

    for (int i = 0; i < 4; i++) {
        if (this->_materiaPool[i] == NULL) {
            std::cout << "Materia Source learnt " << materia->getType() << " materia" << std::endl;
            this->_materiaPool[i] = materia;
            return;
        }
    }
}


AMateria *MateriaSource::createMateria(std::string const &type) {

    for (int i = 0; i < 4; i++) {
        if (this->_materiaPool[i] != NULL && this->_materiaPool[i]->getType() == type) {
            std::cout << "Materia Source created " << type << " materia" << std::endl;
            return this->_materiaPool[i]->clone();
        }
    }

    return NULL;
}


bool MateriaSource::_empty() {

    for (int i = 0; i < 4; i++) {
        if (this->_materiaPool != NULL) {
            return true;
        }
    }

    return false;
}


void MateriaSource::_clear() {

    for (int i = 0; i < 4; i++) {
        delete this->_materiaPool[i];
        this->_materiaPool[i] = NULL;
    }
}
