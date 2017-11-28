#include <iostream>
#include <fstream>

#include "superhero.h"

using namespace std;

int createGroupOfHeroes() {

    ofstream fout;
    fout.open("superheros.txt");
    int superHeroCount = 0, age = 0;
    string name = "";
    char power = 0;
    cout << "How many heroes are in the group? ";
    cin >> superHeroCount;
    SuperHero heroGroup[superHeroCount];
    for(int i = 0; i < superHeroCount; i++){
        cout << "SuperHero #" << i+1 << endl;
        heroGroup[i].setVerbose(true);
        cin >> heroGroup[i];
    }
    cout << endl << "Your Superteam: " << endl;
    for(int i = 0; i < superHeroCount; i++){
        heroGroup[i].setVerbose(false);
        fout << heroGroup[i];
        heroGroup[i].setVerbose(true);
        cout << heroGroup[i];
    }
    fout.close();
    return superHeroCount;
}

void printFromTxt(int superHeroCount){

    SuperHero heroGroup2[superHeroCount];
    ifstream fin;
    fin.open("superheros.txt");

    cout << endl << "Your Superteam from txt file" << endl;

    for (int i = 0; i < superHeroCount; i++){
        if (fin.is_open()){
            heroGroup2[i].setVerbose(false);
            fin >> heroGroup2[i];
            heroGroup2[i].setVerbose(true);
            cout << heroGroup2[i];
        }
    }
}

int main()
{
    int superHeroCount = createGroupOfHeroes();
    printFromTxt(superHeroCount);

    return 0;
        
}
