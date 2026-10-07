/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:33:53 by mrojouan          #+#    #+#             */
/*   Updated: 2026/10/07 10:49:37 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << attackDamage << " points of damage!" <<  std::endl;
	energyPoints -= 1;
}

void ScavTrap::guardGate(void)
{
    std::cout << name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	return ;
}
