/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:39 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/25 17:15:34 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


Sorcerer::Sorcerer() : _name("default"), _title("default") {

}


Sorcerer::Sorcerer(std::string name, std::string title) : _name(name),
_title(title) {

	std::cout << this->_name << ", " << this->_title << ", is born !"
	<< std::endl;
}


Sorcerer::Sorcerer(Sorcerer const& src) {

	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born !"
	<< std::endl;
}


Sorcerer&	Sorcerer::operator=(Sorcerer const& rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_title = rhs._title;
	}

	return *this;
}


Sorcerer::~Sorcerer() {

	std::cout << this->_name << ", " << this->_title << ", is dead."
	<< " Consequences will never be the same!" << std::endl;
}


std::ostream&	operator<<(std::ostream& o, Sorcerer const& i) {

	o << "I am " << i.getName() << ", " << i.getTitle()
	<< ", and I like ponies!" << std::endl;;

	return o;
}


std::string	Sorcerer::getName(void) const {

	return this->_name;
}


std::string	Sorcerer::getTitle(void) const {

	return this->_title;
}


void		Sorcerer::polymorph(Victim const& target) const {

	target.getPolymorphed();
}
