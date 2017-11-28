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

    string str = " ";
    ofstream fout;
    fout.open("testFileTwo.txt", ios::app);
    
    cout << "Write some text..." << endl;
    
    if(fout.is_open()) {
        while(str[0] != '\\') {
            getline(cin, str);
            if(str[0] != '\\') {
                fout << str << endl;
            }
        }
        fout.close();
    }
    else {
        cout << "The file didn't open" << endl;
    }
    return 0;
    }
    return 0;
}
