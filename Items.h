#include <fstream>
#include <iostream>
#include <string>
#include <ctime>

class Item{
protected:
    std::string name;
    int price;
    int minLevel;
public:
    Item(int ,std::string ,std::string );
    Item();
    ~Item();
    Item& operator=(const Item& );

    virtual void print()=0;
    std::string getName();
    int getPrice();
    int getMinLevel();
};

class Weapon : public Item{
    int damage;
    bool twoHanded;
public:
    Weapon(int ,std::string );
    Weapon();
    ~Weapon();
    Weapon& operator=(const Weapon& );

    void starterWeapon();
    int getDamage();
    bool getTwoHanded();
    void print();
};

class Armor : public Item{
    int protection;
public:
    Armor(int ,std::string );
    Armor();
    ~Armor();
    Armor& operator=(const Armor& );
    
    void starterArmor();
    int getProtection();
    void print();
};

class Potion : public Item{
    int effectPoints;
public:
    Potion(int ,std::string );
    ~Potion();
    Potion& operator=(const Potion& );

    std::string getUse();
    int getEffectPoints();
    void print();
};