/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:21:24 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/19 18:21:26 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

class ClapTrap
{
    private:
        std::string _name;
        int _health;
        int _energy;
        int _damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        ~ClapTrap(void);
        int getHealth(void);
        int getEnergy(void);
        int getDamage(void);
        void setHealth(int health);
        void setEnergy(int energy);
        void setDamage(int damage);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};