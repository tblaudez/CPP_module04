/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:06:19 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/08 14:01:45 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character : public ICharacter {

public:

    Character(const std::string& name = "Cloud");

    Character(Character const &src);

    Character &operator=(Character const &rhs);

    virtual ~Character();

    virtual std::string const &getName() const;

    virtual void equip(AMateria *materia);

    virtual void unequip(int idx);

    virtual void use(int idx, ICharacter &target);

private:

    void _clear();

    bool _characterHasEquipedMateria() const;

    std::string _name;
    AMateria **_inventory;
};
