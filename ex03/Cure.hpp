/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:55:51 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 13:57:57 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AMateria.hpp"


class Cure : public AMateria {

public:

	Cure();
	Cure(Cure const& src);
	Cure& operator=(Cure const& rhs);
	virtual ~Cure();

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);

};
