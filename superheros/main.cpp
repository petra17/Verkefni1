#include <iostream>
#include <fstream>

#include "superhero.h"

using namespace std;

void createHeroe() {

	SuperHero hero;
    ofstream fout;
    fout.open("superheros.txt", ios::app);
    cout << "Add a SuperHero" << endl;
    hero.setVerbose(true);
    cin >> hero;
    hero.setVerbose(false);
    fout << hero;
    fout.close();
}

void printFromTxt(){


    ifstream fin;
    fin.open("superheros.txt");

    SuperHero hero;
    cout << endl << "Your Superteam from txt file" << endl;

    if (fin.is_open()){
    	while(!fin.eof()){
    			hero.setVerbose(false);
	        	fin >> hero;
	       		hero.setVerbose(true);
	       	if (!fin.eof()) {
	        	cout << hero;
    		}
    	}
    }

}

int main()
{
    createHeroe();
    printFromTxt();

    return 0;
        
}
