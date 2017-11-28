#ifndef SUPERHERO_H
#define SUPERHERO_H

#include <iostream>
#include <string>

using namespace std;

class SuperHero
{
    private:
        string name;
        int age;
        char power;
        bool verbose;

    public:
        // býr til tilvik af hetju með núllstilltum breytum
        SuperHero();
        // býr til tilvik af hetju með innsettu breytum
        SuperHero(string name, int age, char power);
        // yfirskrifar nafnið á hetjunni
        void setName(string name);
        // yfirskrifar aldurinn á hetjunni
        void setAge(int age);
        // yfirskrifar krafta hetjunnar
        void setSuperPower(char power);
        // yfir skrifar << til að prenta út upplýsingar um hetjuna
        friend ostream& operator << (ostream& outs, const SuperHero &superhero);
        friend istream& operator >> (istream& ins, SuperHero &superhero);
        bool setVerbose(bool v);
};

#endif // SUPERHERO_H
