/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 16:07:39 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:03:00 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

#include <iostream> // cout


Sorcerer::Sorcerer() {

}


Sorcerer::Sorcerer(std::string const &name, std::string const &title) : _name(name), _title(title) {

    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}


Sorcerer::Sorcerer(Sorcerer const &src) {

    std::cout << src._name << ", " << src._title << ", is born !" << std::endl;
    *this = src;
}


Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {

    if (this != &rhs) {
        this->_name = rhs._name;
        this->_title = rhs._title;
    }

    return *this;
}


Sorcerer::~Sorcerer() {

    std::cout << this->_name << ", " << this->_title << ", is dead." << " Consequences will never be the same!"
              << std::endl;
}


std::ostream &operator<<(std::ostream &o, Sorcerer const &i) {

    o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;;
    return o;
}


std::string Sorcerer::getName() const {

    return this->_name;
}


std::string Sorcerer::getTitle() const {

    return this->_title;
}


void Sorcerer::polymorph(Victim const &target) const {

    target.getPolymorphed();
}
