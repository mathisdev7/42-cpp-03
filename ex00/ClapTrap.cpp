/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:25:56 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/19 18:25:57 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    this->setHealth(10);
    this->setEnergy(10);
    this->setDamage(0);
    std::cout << "Initialized " << name << "Claptrap" << std::endl;
}

int ClapTrap::getHealth(void)
{
    return (this->_health);
}

int ClapTrap::getEnergy(void)
{
    return (this->_energy);
}

int ClapTrap::getDamage(void)
{
    return (this->_damage);
}

void ClapTrap::setHealth(int health)
{
    this->_health = health;
}

void ClapTrap::setEnergy(int energy)
{
    this->_energy = energy;
} 

void ClapTrap::setDamage(int damage)
{
    this->_damage = damage;
}

void attack(const std::string& target)
{
}
void takeDamage(unsigned int amount)
{

}
void beRepaired(unsigned int amount)
{

}