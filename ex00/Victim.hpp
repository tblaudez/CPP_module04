/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:47 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:03:05 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..
#include <ostream> // duh..


class Victim {

public:

	Victim(std::string const& name="Victim");
	Victim(Victim const& src);
	Victim& operator=(Victim const& rhs);
	~Victim();

	std::string		getName() const;
	virtual void	getPolymorphed() const;

protected:

	std::string	_name;
};

std::ostream&	operator<<(std::ostream& o, Victim const& i);
