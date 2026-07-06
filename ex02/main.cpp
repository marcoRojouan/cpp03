/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:10:53 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/06 11:49:50 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "========== ClapTrap ==========\n" << std::endl;

    ClapTrap clap("CL4P");

    clap.attack("Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n========== ScavTrap ==========\n" << std::endl;

    ScavTrap scav("SC4V");

    scav.attack("Psycho");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();

    std::cout << "\n========== FragTrap ==========\n" << std::endl;

    FragTrap frag("FR4G");

    frag.attack("Skag");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    std::cout << "\n========== Energy test ==========\n" << std::endl;

    for (int i = 0; i < 105; i++)
        frag.attack("Dummy");

    std::cout << "\n========== Death test ==========\n" << std::endl;

    frag.takeDamage(500);
    frag.attack("Another Dummy");
    frag.beRepaired(10);

    std::cout << "\n========== End ==========\n" << std::endl;

    return (0);
}
