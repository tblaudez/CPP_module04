/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:28:23 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:30:37 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AMateria.hpp"


class IMateriaSource {

public:

    virtual ~IMateriaSource() {}

    virtual void learnMateria(AMateria *materia) = 0;

    virtual AMateria *createMateria(std::string const &type) = 0;

};
