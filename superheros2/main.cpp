#include <iostream>
#include <fstream>

#include "superhero.h"

using namespace std;

int createGroupOfHeroes() {

    SuperHero hero;
    ofstream fout;
    fout.open("superheros.dat", ios::binary|ios::app);
    hero.setVerbose(true);
    cin >> hero;
    hero.setVerbose(false);
    fout.write((char*)(&hero), sizeof(SuperHero));
    fout.close();
}

void printFromTxt() {
    

    cout << endl << "Your Superteam from txt file" << endl;
    ifstream fin;
    fin.open("superheros.dat", ios::binary);

    fin.seekg(0,fin.end);
    int records = fin.tellg() / sizeof(SuperHero);
    fin.seekg(0,fin.beg);

    SuperHero *hero = new SuperHero[records];
    fin.read((char*)hero, sizeof(SuperHero) *  records);    
    fin.close();

    for (int i = 0; i < records; i++) {
        hero[i].setVerbose(true);
        cout << hero[i];
    }
    delete[] hero;
}

int main(){
    createGroupOfHeroes();
    printFromTxt();

    return 0;
        
}
