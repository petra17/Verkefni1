#include "superhero.h"

SuperHero::SuperHero(){
    this->name = "";
    this->age = 0;
    this->power = 'n';
    this->verbose = 0;
}

SuperHero::SuperHero(string name, int age, char power){
    this->name = name;
    this->age = age;
    this->power = power;
    this->verbose = 0;
}

void SuperHero::setName(string name){
    this->name = name;
}

void SuperHero::setAge(int age){
    this->age = age;
}

void SuperHero::setSuperPower(char power){
    this->power = power;
}

bool SuperHero::setVerbose(bool v){
    this->verbose = v;
}

ostream& operator << (ostream& outs, const SuperHero &superhero){
    outs << superhero.name << " "; 
    if(superhero.verbose){
        outs << "("; 
    }
    outs << superhero.age;
    if(superhero.verbose){
        outs <<   ") :";
    }
    if(superhero.verbose){
        if(superhero.power == 'f'){
            outs << " Flying";
        } else if(superhero.power == 'g'){
            outs << " Giant";
        } else if(superhero.power == 'h'){
            outs << " Hacker";
        } else if(superhero.power == 'n'){
            outs << " None";
        } else {
            outs << " Weakling";
        }
    }
    else {
        outs << " " << superhero.power;
    }
    outs << endl;
    return outs;
}

istream& operator >> (istream& ins, SuperHero &superhero){
    if(superhero.verbose){
        cout << "Enter name: ";
    }
    ins >> superhero.name;
    if(superhero.verbose){
        cout << "Enter age: ";
    }
    ins >> superhero.age;
    if(superhero.verbose){
        cout << "Enter power character: ";
    }
    ins >> superhero.power;
    return ins;
}


