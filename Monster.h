#include <iostream>
#include <string>
#include <vector>
#include "Hero.h"

class Monster: public LivingBeing
{
    protected:
        int minAttack;
        int maxAttack;
        int defense;
    public:
        Monster(const std::string,const int);
        virtual ~Monster();

        int attack(); //Epistrefei tuxaio arithmo anamesa sto minAttack kai to maxAttack.
        void takeDamage(int);
        int defend(const int); //Epistrefei to damage pou tha parei to teras meta th meiwsh tou incoming damage apo to defense.
};

class Dragon: public Monster
{
    public:
        Dragon(const std::string,const int);
        ~Dragon();
};

class Exosceleton: public Monster
{
    public:
        Exosceleton(const std::string,const int);
        ~Exosceleton();
};

class Spirit: public Monster
{
    public:
        Spirit(const std::string,const int);
        ~Spirit();
};