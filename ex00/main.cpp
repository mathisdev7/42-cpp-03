/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:33:47 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/19 18:33:56 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap one("test");
    std::cout << one.getHealth() << std::endl;
    std::cout << one.getEnergy() << std::endl;
    std::cout << one.get() << std::endl;
}