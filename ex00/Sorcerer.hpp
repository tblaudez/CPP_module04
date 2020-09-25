/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:42 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 16:51:10 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Victim.hpp"

#include <iostream>
#include <string>


class Sorcerer {

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const& src);
	Sorcerer& operator=(Sorcerer const& rhs);
	~Sorcerer();

	std::string	getName(void) const;
	std::string	getTitle(void) const;

	void		polymorph(Victim const& target) const;

private:

	Sorcerer();

	std::string	_name;
	std::string	_title;
};

std::ostream&	operator<<(std::ostream& o, Sorcerer const& i);
