/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:10:47 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/06 11:14:11 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Deconstructor called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack." << std::endl;
		return;
	}
	std::cout << "ClapTrap "<< name << " attacks " << target << " , causing " << attackDamage << " points of damage!" <<  std::endl;
	energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
    	return;
	std::cout << name << " took " << amount << " damage!" << std::endl;
	if (amount >= (unsigned int)hitPoints)
    	hitPoints = 0;
	else
    	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0 || hitPoints == 0)
	{
		std::cout << name << " cannot repair." << std::endl;
		return;
	}
	std::cout << name << " repaired itself by "
			<< amount << " HP!" << std::endl;
	hitPoints += amount;
	energyPoints--;
}