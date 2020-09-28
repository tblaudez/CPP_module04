/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:31:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 15:38:03 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ICharacter.hpp"

#include <iostream>
#include <string>


class AMateria {

public:

	AMateria(std::string const& type);
	AMateria(AMateria const& src);
	AMateria& operator=(AMateria const& rhs);
	virtual ~AMateria();

	std::string const&	getType() const;
	unsigned int		getXP() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

protected:

	std::string		_type;
	unsigned int	_XP;

};
