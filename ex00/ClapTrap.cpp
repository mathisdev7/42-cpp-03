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
    std::cout << "Initialized " << name << " Claptrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Default destructor called" << std::endl;
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

void ClapTrap::attack(const std::string& target)
{
    if (this->getEnergy() > 0 && this->getHealth() > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
        this->setEnergy(this->_energy - 1);
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " cannot attack " << target << ", no energy/health left!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " took " << amount << " damages, " << this->_health - amount << " left!" << std::endl;
    this->setHealth(this->_health - amount);
    this->setDamage(amount);
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergy() > 0 && this->getHealth() > 0)
    {
        std::cout << "ClapTrap " << this->_name << " repaired " << amount << " damages" << this->_health + amount << " left!" << std::endl;
        this->setHealth(this->_health + amount);
        this->setEnergy(this->_energy - 1);
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " cannot repair himself, no energy/health left!" << std::endl;
    }
}