//
//  main.cpp
//  Verk1.2
//
//  Created by Petra Frantz on 27/11/2017.
//  Copyright © 2017 Petra Frantz. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string str;
    ofstream fout;
    fout.open("nextFileTwo.txt", ios::app);
    
    if(fout.is_open()) {
        getline(cin, str);
        if (str[0] != '\\') {
        fout << str << endl;
        }
    }
    return 0;
}
