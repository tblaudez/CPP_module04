/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Asteroid.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:36:03 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:20:05 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IAsteroid.hpp"


class Asteroid : public IAsteroid {

public:

    Asteroid();

    Asteroid(Asteroid const &src);

    Asteroid &operator=(Asteroid const &rhs);

    virtual ~Asteroid();

    virtual std::string beMined(StripMiner *miner) const;

    virtual std::string beMined(DeepCoreMiner *miner) const;

    virtual std::string getName() const;

};
