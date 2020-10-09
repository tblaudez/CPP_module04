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

#include <cstring> // memcpy


MateriaSource::MateriaSource() : _materiaPool(new AMateria*[4]()) {

}


MateriaSource::MateriaSource(MateriaSource const& src) {

	*this = src;
}


MateriaSource&	MateriaSource::operator=(MateriaSource const& rhs) {

	if (this != &rhs) {

		// If Source is not empty, clear it
		if (!this->_empty()) {
			this->_clear();
		}

		memcpy(this->_materiaPool, rhs._materiaPool, sizeof(AMateria*) * 4);
	}

	return *this;
}


MateriaSource::~MateriaSource() {

	this->_clear();
	delete[] this->_materiaPool;
}


void			MateriaSource::learnMateria(AMateria* materia) {

	for (int i=0; i < 4; i++) {
		if (this->_materiaPool[i] == NULL) {
			this->_materiaPool[i] = materia;
			return;
		}
	}
}


AMateria*		MateriaSource::createMateria(std::string const& type) {

	for (int i=0; i < 4; i++) {
		if (this->_materiaPool[i] != NULL && this->_materiaPool[i]->getType() == type) {
			return this->_materiaPool[i]->clone();
		}
	}

	return NULL;
}


bool			MateriaSource::_empty() {

	for (int i=0; i < 4; i++) {
		if (this->_materiaPool != NULL) {
			return true;
		}
	}

	return false;
}


void			MateriaSource::_clear() {

	for (int i=0; i < 4; i++) {
		delete this->_materiaPool[i];
		this->_materiaPool[i] = NULL;
	}
}
