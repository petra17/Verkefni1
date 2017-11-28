//
//  main.cpp
//  Verk1.1
//
//  Created by Petra Frantz on 27/11/2017.
//  Copyright © 2017 Petra Frantz. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

bool checkAnswer() {
    char c = '0';
    while(true) {
        cout << "Do you wish to continue (y/n)? ";
        cin >> c;
        if (c == 'y') {
            return true;
        }
        else if (c == 'n') {
            return false;
        }
    }
}

int main() {
    string str;
    bool answer = true;
    ifstream fin;
    
    fin.open ("textFile.txt");
    
    if (fin.is_open()) {
        while(answer) {
            for (int i = 0; i < 10; i++) {
                getline(fin, str);
                cout << str << endl;
            }
            answer = checkAnswer();
        }
        fin.close();
    }
    
    else {
        cout << "no file is here" << endl;
    }
    
    return 0;
}
