/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:29:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:35:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource {

public:

	MateriaSource();
	MateriaSource(MateriaSource const& src);
	MateriaSource& operator=(MateriaSource const& rhs);
	~MateriaSource();

	virtual void		learnMateria(AMateria* materia);
	virtual AMateria*	createMateria(std::string const& type);

private:

	bool		_empty();
	void		_clear();

	AMateria**	_materiaPool;

};
