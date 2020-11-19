/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DeepCoreMiner.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:24:32 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:16:50 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "IMiningLaser.hpp"


class DeepCoreMiner : public IMiningLaser {

public:

    DeepCoreMiner();

    DeepCoreMiner(DeepCoreMiner const &src);

    DeepCoreMiner &operator=(DeepCoreMiner const &rhs);

    virtual ~DeepCoreMiner();

    virtual void mine(IAsteroid *target);

    virtual IMiningLaser *clone() const;

};
