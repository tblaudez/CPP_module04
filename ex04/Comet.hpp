/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Comet.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:32:35 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:22:02 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IAsteroid.hpp"


class Comet : public IAsteroid {

public:

    Comet();

    Comet(Comet const &src);

    Comet &operator=(Comet const &rhs);

    virtual ~Comet();

    virtual std::string beMined(StripMiner *miner) const;

    virtual std::string beMined(DeepCoreMiner *miner) const;

    virtual std::string getName() const;

};
