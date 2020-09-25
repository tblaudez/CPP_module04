/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:47 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 17:09:03 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class Victim {

public:

	Victim(std::string name="Victim");
	Victim(Victim const& src);
	Victim& operator=(Victim const& rhs);
	~Victim();

	std::string			getName(void) const;
	virtual void		getPolymorphed(void) const;

protected:

	std::string	_name;
};

std::ostream&	operator<<(std::ostream& o, Victim const& i);
