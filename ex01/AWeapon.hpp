/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:18:50 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:19:22 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class AWeapon {

public:

    AWeapon(std::string const &name = "Rusty Pistol", int apcost = 0, int damage = 0);

    AWeapon(AWeapon const &src);

    AWeapon &operator=(AWeapon const &rhs);

    virtual ~AWeapon();

    std::string const &getName() const;

    int getApCost() const;

    int getDamage() const;

    virtual void attack() const = 0;

protected:

    std::string _name;
    unsigned int _apcost;
    unsigned int _damage;

};
