#include <iostream>
#include <string>
#include <ctime>
#include "Monster.h"
using namespace std;


//CONSTRUCTORS
//CONSTRUCTORS
//CONSTRUCTORS

Monster::Monster(const string s, const int lvl=1):  LivingBeing(s,lvl) {
    healthPower=50+lvl*15;
}

Dragon::Dragon(const string n,int lvl) :  Monster(n,lvl) {
    minAttack=5+6*lvl;
    maxAttack=10+6*lvl;
    defense=10+4*lvl;
    agility=10+2*lvl;
}
Exosceleton::Exosceleton(const string n,int lvl) : Monster(n,lvl) {
    minAttack=3+3*lvl;
    maxAttack=3+3*lvl;
    defense=20+5*lvl;
    agility=10+2*lvl;
}
Spirit::Spirit(const string n,int lvl) : Monster(n,lvl) {
    minAttack=3+3*lvl;
    maxAttack=3+3*lvl;
    defense=10+4*lvl;
    agility=20+3*lvl;
}

//DESTRUCTORS
//DESTRUCTORS
//DESTRUCTORS

Monster::~Monster() {}

Dragon::~Dragon() {}

Exosceleton::~Exosceleton() {}

Spirit::~Spirit() {}

//MONSTER
//MONSTER
//MONSTER
int Monster::attack()
{
    int damage=rand()%(maxAttack+1);
    if(damage < minAttack) damage+=minAttack;
    return damage;
}

void Monster::takeDamage(int damage){
    damage-=defense;
    if(dodge()){cout << "Attack has been dodged!" << endl; return;}
    if(damage < 0) damage=0;
    healthPower-=damage;
    cout << name << " takes " << damage << " damage!" << endl;
}

int Monster::defend(const int attack)
{
    int damage = attack - defense;
    if (damage < 0)
        return 0;
    return damage;    
}