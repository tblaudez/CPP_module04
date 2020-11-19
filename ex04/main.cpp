/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:49:03 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 11:34:36 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "Comet.hpp"
#include "Asteroid.hpp"

int main() {

    MiningBarge *barge = new MiningBarge;

    barge->equip(new DeepCoreMiner);
	barge->equip(new StripMiner);
	barge->equip(new StripMiner);
	barge->equip(new DeepCoreMiner);

	MiningBarge *real_barge = new MiningBarge(*barge);
	delete barge;


    real_barge->mine(new Comet);
    real_barge->mine(new Asteroid);

    delete real_barge;

    return 0;
}
