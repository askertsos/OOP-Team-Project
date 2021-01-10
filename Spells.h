#include <iostream>
#include <string>

class Spell
{
    protected:
        std::string name;
        int price;
        int minDamage;
        int maxDamage;
        int levelRequired;
        int mpRequired;

    public:
        Spell(int ,const std::string);
        Spell(const Spell& );
        Spell& operator=(const Spell& );
        ~Spell();

        //accessors
        std::string getName() const;
        int getPrice() const;
        int getLevelReq() const;
        int getMP() const;

        virtual int getReduction() const=0;
        virtual void print() const=0;
};

class IceSpell: public Spell
{
    private:
        int damageReduction;

    public:
        IceSpell(int ,const std::string);
        IceSpell(const IceSpell& );
        IceSpell& operator=(const IceSpell& );
        ~IceSpell();

        int getReduction() const;
        void print() const;
};

class FireSpell: public Spell
{
    private:
        int defenseReduction;
        
    public:
        FireSpell(int ,const std::string);
        FireSpell(const FireSpell& );
        FireSpell& operator=(const FireSpell& );
        ~FireSpell();

        int getReduction() const;
        void print() const;
};

class LightningSpell: public Spell
{
    private:
        double dodgeReduction;
        
    public:
        LightningSpell(int ,const std::string);
        LightningSpell(const LightningSpell& );
        LightningSpell& operator=(const LightningSpell& );
        ~LightningSpell();

        int getReduction() const;
        void print() const;
};

