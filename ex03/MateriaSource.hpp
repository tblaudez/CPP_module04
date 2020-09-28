/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:29:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 15:14:10 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#include <iostream>


class MateriaSource : public IMateriaSource {

public:

	MateriaSource();
	MateriaSource(MateriaSource const& src);
	MateriaSource&	operator=(MateriaSource const& rhs);
	~MateriaSource();

	virtual void		learnMateria(AMateria* materia);
	virtual AMateria*	createMateria(std::string const& type);

private:

	AMateria**	_materiaPool;

};

std::ostream&	operator<<(std::ostream& o, MateriaSource const& i);
