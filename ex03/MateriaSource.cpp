/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:33:09 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 16:17:13 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


#include <iostream>


MateriaSource::MateriaSource() : _materiaPool(new AMateria*[4]()) {

}


MateriaSource::MateriaSource(MateriaSource const& src) {

	*this = src;
}


MateriaSource&	MateriaSource::operator=(MateriaSource const& rhs) {

	if (this != &rhs) {
		std::copy(rhs._materiaPool, rhs._materiaPool + 4, this->_materiaPool);
	}

	return *this;
}


MateriaSource::~MateriaSource() {
	delete[] this->_materiaPool;
}


std::ostream&	operator<<(std::ostream& o, MateriaSource const& i) {

	(void)i;
	o << "MateriaSource" << std::endl;
	return o;
}


void			MateriaSource::learnMateria(AMateria* materia) {

	for (int i=0; i<4; i++) {
		if (this->_materiaPool[i] == NULL) {
			this->_materiaPool[i] = materia;
			return;
		}
	}
}


AMateria*		MateriaSource::createMateria(std::string const& type) {

	for (int i=0; i<4; i++) {
		if (this->_materiaPool[i] != NULL && this->_materiaPool[i]->getType() == type) {
			return this->_materiaPool[i]->clone();
		}
	}
	return NULL;
}
