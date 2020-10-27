//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#pragma once

#include <iostream>

class Character
{
public:
    Character(int,int,int,int);
    void takeDamage(int damage);
    bool isAlive() = 0;
    virtual void death() = 0;

    int getAttack();
    int getHealth();
    int getDefense();
protected:
    int health;
    int attack;
    int defense;
    int strength;
};

