/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IAsteroid.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:29:26 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:18:48 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#pragma once


#include <string> // duh..


class StripMiner; // Forward declaration
class DeepCoreMiner; // Forward declaration


class IAsteroid {

public:

    virtual ~IAsteroid() {}

    virtual std::string beMined(StripMiner *miner) const = 0;

    virtual std::string beMined(DeepCoreMiner *miner) const = 0;

    virtual std::string getName() const = 0;

};
