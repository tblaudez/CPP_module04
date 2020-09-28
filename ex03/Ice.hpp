/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:41:35 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 15:13:41 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AMateria.hpp"

#include <iostream>


class Ice : public AMateria {

public:

	Ice();
	Ice(Ice const& src);
	Ice&	operator=(Ice const& rhs);
	~Ice();

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);

};

std::ostream&	operator<<(std::ostream& o, Ice const& i);
