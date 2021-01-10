#include <iostream>
#include <string>
#include <vector>
#include "LivingBeing.h"

class Level
{
        int realLevel;
        int currentXp;
        int levelUpXp;
    public:
        Level(const int);

        void levelUp();

        bool addXp(int);
        int getRL();
        int getXP();
        int getLvlUp();
};

class Hero;
class Inventory
{
    private:
        int maxcapacity;
        int curcapacity;
        int wcapacity;
        int acapacity;
        int pcapacity;
        int scapacity;
        std::vector <Weapon> weapons;
        std::vector <Armor> armors;
        std::vector <Potion> potions;
        std::vector <Spell*> spells;

    public:
        Inventory();
        ~Inventory();

        bool isFull();
        void print(Hero&);

        Weapon equipWeapon(const int,const Weapon);
        Armor equipArmor(const int,const Armor);
};

class Hero: public LivingBeing
{
    protected:
        int MP;
        int strength;
        int dexterity;
        int money;
        Weapon weapon;
        Armor armor;
        Level level;
        Inventory inventory;
    public:
        Hero(const std::string);
        ~Hero();

        int attack();
        void takeDamage(int);
        int use(Spell&);
        void use(Potion&);
        virtual void levelUp() const=0;

        void checkInventory();

        void equip(const int);
        void equip(const Weapon&);
        void equip(const Armor&);

        Weapon getWeapon();
        Armor getArmor();
        Level getLevel();
        Inventory getInventory();    
};

class Warrior: public Hero
{
    public: 
        Warrior(const std::string);

        void levelUp();
};

class Sorcerer: public Hero
{
    public:
        Sorcerer(const std::string);

        void levelUp();
};

class Paladin: public Hero
{
    public:
        Paladin(const std::string);

        void levelUp();
};