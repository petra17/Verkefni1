#include <iostream>
#include <fstream>

#include "superhero.h"

using namespace std;

void createGroupOfHeroes() {

    int size = 0;
    cout << "How many heros?: ";
    cin >> size;
    SuperHero *hero = new SuperHero[size];
    ofstream fout;
    fout.open("superheros.dat", ios::binary);
    for (int i = 0; i < size; i++)
    {
        hero[i].setVerbose(true);
        cin >> hero[i];
        hero[i].setVerbose(false);
        fout.write((char*)(&hero[i]), sizeof(SuperHero));
    }
    fout.close();
    delete[] hero;
    
}

void printFromBinary() {
    

    cout << endl << "Your Superteam from binary file" << endl;
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
    printFromBinary();

    return 0;
        
}
