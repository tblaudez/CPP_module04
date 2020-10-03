/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 16:49:03 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/28 16:51:02 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "Comet.hpp"
#include "Asteroid.hpp"

int	main(void) {

	MiningBarge	barge;

	barge.equip(new DeepCoreMiner);
	barge.equip(new StripMiner);

	barge.mine(new Comet);
	barge.mine(new Asteroid);

	return 0;
}