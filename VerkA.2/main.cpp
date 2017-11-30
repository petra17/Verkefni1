#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ofstream fout;

    cout << "Write as many lines as you want" << endl;
    cout << "To end write '\\' in the beginning of a line" << endl;
    fout.open("DataFile.txt");
    while(fout.is_open()) {
        getline(cin, line);
        if(line[0] != '\\') {
            fout << line << endl;
        }
        else {
            fout.close();
        }
    }
    return 0;
}
