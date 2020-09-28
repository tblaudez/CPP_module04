/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:55:51 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 15:13:31 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AMateria.hpp"

#include <iostream>


class Cure : public AMateria {

public:

	Cure();
	Cure(Cure const& src);
	Cure&	operator=(Cure const& rhs);
	~Cure();

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);

};

std::ostream&	operator<<(std::ostream& o, Cure const& i);
