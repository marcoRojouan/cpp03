/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:10:53 by mrojouan          #+#    #+#             */
/*   Updated: 2026/10/07 10:49:34 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
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

    std::cout << "\n========== Energy test ==========\n" << std::endl;

    for (int i = 0; i < 55; i++)
        scav.attack("Dummy");

    std::cout << "\n========== Death test ==========\n" << std::endl;

    scav.takeDamage(500);
    scav.attack("Another Dummy");
    scav.beRepaired(10);

    std::cout << "\n========== End ==========\n" << std::endl;

    return (0);
    
}
