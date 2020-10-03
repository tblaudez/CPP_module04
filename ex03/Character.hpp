/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 14:06:19 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 15:12:44 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "ICharacter.hpp"
#include "AMateria.hpp"

#include <iostream>


class Character : public ICharacter {

public:

	Character(std::string name="Cloud");
	Character(Character const& src);
	Character&	operator=(Character const& rhs);
	~Character();

	virtual std::string const&	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);

private:

	void		_clear();
	bool		_characterHasEquipedMateria() const;

	std::string	_name;
	AMateria**	_inventory;
};

std::ostream&	operator<<(std::ostream& o, Character const& i);
