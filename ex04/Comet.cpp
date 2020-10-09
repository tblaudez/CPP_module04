/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Comet.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:33:35 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:42:45 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include "Comet.hpp"


Comet::Comet() {

}


Comet::Comet(Comet const& src) {

	*this = src;
}


Comet&	Comet::operator=(Comet const& rhs) {

	if (this != &rhs) {
		/* Do things */
	}

	return *this;
}


Comet::~Comet() {

}


std::string	Comet::beMined(StripMiner* miner) const {

	(void)miner;
	return "Tartarite";
}


std::string	Comet::beMined(DeepCoreMiner* miner) const {

	(void)miner;
	return "Meium";
}


std::string	Comet::getName() const {

	return "Comet";
}
