#include <iostream>
#include <fstream>

#include "superhero.h"

using namespace std;



void createSomeHeroes() {

    ofstream fout;
    fout.open("superheros.txt");
    SuperHero batman("Batman", 40, 'h');

    SuperHero superman("Superman", 92, 'f');

    SuperHero hulk;
    hulk.setName("The Hulk");
    hulk.setAge(64);
    hulk.setSuperPower('g');

    SuperHero aquaman;

    fout << batman << endl;
    fout << superman << endl;
    fout << hulk << endl;
    fout << aquaman << endl;

    batman.setVerbose(true);
    superman.setVerbose(true);
    hulk.setVerbose(true);
    aquaman.setVerbose(true);

    cout << batman << endl;
    cout << superman << endl;
    cout << hulk << endl;
    cout << aquaman << endl;    

    fout.close();
}
void createGroupOfHeroes() {

    ofstream fout;
    fout.open("superheros.txt", ios::app);
    int superHeroCount = 0, age = 0;
    string name = "";
    char power = 0;
    cout << "How many heroes are in the group? ";
    cin >> superHeroCount;
    SuperHero heroGroup[superHeroCount];
    for(int i = 0; i < superHeroCount; i++){
        cout << "SuperHero #" << i+1 << endl;
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

}

int main()
{
    cout << "PART A:" << endl;
    createSomeHeroes();

    cout << endl;
    cout << "PART B:" << endl;
    createGroupOfHeroes();

    return 0;
        
}
