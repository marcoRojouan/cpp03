/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 11:10:53 by mrojouan          #+#    #+#             */
/*   Updated: 2026/07/09 11:41:49 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    std::cout << "=== Construction ===" << std::endl;
    ClapTrap a("Alpha");
    ClapTrap b("Beta");

    std::cout << "\n=== Attaques normales ===" << std::endl;
    a.attack("Beta");
    b.takeDamage(0); // si attack damage est 0 par défaut
    b.attack("Alpha");

    std::cout << "\n=== Réparation ===" << std::endl;
    a.beRepaired(5);
    b.beRepaired(3);

    std::cout << "\n=== Simulation dégâts ===" << std::endl;
    a.takeDamage(4);
    a.takeDamage(7); // dépasse les HP

    std::cout << "\n=== Cas limite : mort ===" << std::endl;
    a.attack("Beta");
    a.beRepaired(10);

    std::cout << "\n=== Épuisement énergie ===" << std::endl;
    ClapTrap c("Gamma");

    // On force l'épuisement d'énergie
    for (int i = 0; i < 12; i++)
    {
        c.attack("Dummy");
    }

    std::cout << "\n=== Test réparation sans énergie ===" << std::endl;
    c.beRepaired(10);

    std::cout << "\n=== Fin des tests ===" << std::endl;
    return 0;
}