/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 17:49:44 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 12:20:23 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <string> // duh..


class Enemy {

public:

    Enemy(int hp = 0, std::string const &type = "default");

    Enemy(Enemy const &src);

    Enemy &operator=(Enemy const &rhs);

    virtual ~Enemy();

    std::string const &getType() const;

    int getHP() const;

    virtual void takeDamage(int damage);

protected:

    int _health;
    std::string _type;

};
