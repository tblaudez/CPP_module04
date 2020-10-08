/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 13:31:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 13:54:47 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ICharacter.hpp"

#include <string> // duh..


class AMateria {

public:

	AMateria(std::string const& type);
	AMateria(AMateria const& src);
	AMateria& operator=(AMateria const& rhs);
	virtual ~AMateria();

	std::string const&	getType() const;
	unsigned int		getXP() const;

	void				setXP(unsigned int XP);
	void				setType(std::string const& type);

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

private:

	std::string		_type;
	unsigned int	_XP;

};
