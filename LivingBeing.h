#include <iostream>
#include <string>
#include <vector>
#include "Items.h"
#include "Spells.h"

class LivingBeing
{
    protected:
        std::string name;
        int healthPower;
        int level;
        int agility;
    public:
        LivingBeing(const std::string,const int);
        virtual ~LivingBeing();

        virtual void takeDamage(int)=0;
        virtual void faint() = 0;

        std::string getName();
        int getHP();
        int getLevel();
        int getAgility();

        bool dodge();
};