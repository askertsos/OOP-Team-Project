#include <iostream>
#include <string>
#include <ctime>
#include "LivingBeing.h"
using namespace std;


//CONSTRUCTORS
//CONSTRUCTORS
//CONSTRUCTORS

LivingBeing::LivingBeing(const string s, const int lvl=1){
    name=s;
    level=lvl;
}

//DESTRUCTORS
//DESTRUCTORS
//DESTRUCTORS

LivingBeing::~LivingBeing() {}

//LivingBeing
//LivingBeing
//LivingBeing

void LivingBeing::takeDamage(const int damage)
{
    if (damage < healthPower)
        healthPower-= damage;
    else
        faint();
}

bool LivingBeing::dodge()
{
    int temp = rand()%100;
    if (temp>agility)
        return false;
    return true;
}

string LivingBeing::getName(){return name;}
int LivingBeing::getHP(){return healthPower;}
int LivingBeing::getLevel(){return level;}
int LivingBeing::getAgility(){return agility;}