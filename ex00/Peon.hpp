/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:36 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 17:09:48 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Victim.hpp"

#include <iostream>
#include <string>


class Peon : public Victim {

public:

	Peon(std::string name="Peon");
	Peon(Peon const& src);
	Peon& operator=(Peon const& rhs);
	~Peon();

	virtual void	getPolymorphed(void) const;
};
