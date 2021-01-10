#include "Items.h"
using namespace std;

//constructors

//Na kanoume common(0-50),uncommon(50-75),rare(75-90) kai epic(90-100) me ena tuxaio pososto ths 100
Item::Item(int lvl,string nam,string type) : name(nam) {
    int base=rand()%4;
    minLevel=lvl-2+base;
    if(minLevel <= 0) minLevel=1;
    price=100+50*base;
}
Item::Item(){}
Weapon::Weapon(int lvl,string name) : Item(lvl,name,"weapon") , damage(lvl/2+1+lvl*rand()%4) , twoHanded( (rand()%2 == 0) ? true : false ) {}
Weapon::Weapon(){starterWeapon();}
Armor::Armor(int lvl,string name) : Item(lvl,name,"armor") , protection(lvl+1+lvl*rand()%4) {}
Armor::Armor() : Item() {starterArmor();}
Potion::Potion(int lvl,string name) : Item(lvl,name,"potion") , effectPoints(10+10*(lvl-2+rand()%4)) {}

//printers

void Weapon::print(){
    cout << "Name: " << name << endl;
    cout << "Damage : " << damage << endl;
    if(twoHanded == true) cout << "Type : heavy (both hands needed)" << endl; else cout << "Type : light (one hand needed)" << endl;
    cout << "Price : " << price << endl;
    cout << "Requirements : minimum level " << minLevel << endl << endl;
}
void Armor::print(){
    cout << "Name : " << name << endl;
    cout << "Protection : " << protection << endl;
    cout << "Price : " << price << endl;
    cout << "Requirements : minimum level " << minLevel << endl << endl;
}
void Potion::print(){
    cout << "Potion of " << name << endl;
    cout << "Potion's power : " << effectPoints << endl;
    cout << "Price : " << price << endl;
    cout << "Requirements : minimum level " << minLevel << endl << endl; 
}

//destructors

Item::~Item() {}

Weapon::~Weapon() {}

Armor::~Armor() {}

Potion::~Potion() {}


//copy-constructors

/* Item::Item(const Item& i)
{
    if (this!=&i)
    {
        name = i.name;
        price = i.price;
        minLevel = i.minLevel;
    }
}

Weapon::Weapon(const Weapon& w):Item(w)
{
    if (this!=&w)
    {
        damage = w.damage;
        twoHanded = w.twoHanded;
    }
} 

Armor::Armor(const Armor& a):Item(a)
{
    if (this!=&a)
        protection = a.protection;
} 

Potion::Potion(const Potion& p):Item(p)
{
    if (this!=&p)
        effectPoints = p.effectPoints;
} */

//assignment operator overloads

Item& Item::operator=(const Item& i)
{
    if (this!=&i)
    {
        name = i.name;
        price = i.price;
        minLevel = i.minLevel;
    }
    return *this;
}

Weapon& Weapon::operator=(const Weapon& w)
{
    if (this!=&w)
    {
        damage = w.damage;
        twoHanded = w.twoHanded;
    }
    return *this;
}

Armor& Armor::operator=(const Armor& a)
{
    if (this!=&a)
    {
        protection = a.protection;
    }
    return *this;
}

Potion& Potion::operator=(const Potion& p)
{
    if (this!=&p)
        effectPoints = p.effectPoints;
    return *this;
}


//getters

string Item::getName(){return name;}
int Item::getPrice(){return price;}
int Item::getMinLevel(){return minLevel;}

string Potion::getUse(){return name;}
int Potion::getEffectPoints(){return effectPoints;}

int Armor::getProtection(){return protection;}

int Weapon::getDamage(){return damage;}
bool Weapon::getTwoHanded(){return twoHanded;}

//mutators

void Weapon::starterWeapon(){
    name="Beginner΄s dagger";
    price=0;
    minLevel=1;
    damage=1;
    twoHanded=false;
}

void Armor::starterArmor(){
    name="Beginner΄s shield";
    price=0;
    minLevel=1;
    protection=1;
}