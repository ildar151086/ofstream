
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main() {
    int const SIZE = 5;
    int const MAX_LEN = 4;

    string nameStr;
    string  elements[SIZE] = {"dsf","sdfsd","sdfsd","sdfsdf","sdfsdf"};

    ofstream file;
    cout << "Задайте имя файла ";
    cin >> nameStr;

    file.open(nameStr + ".txt");
    for (int i = 0; i < SIZE; i++) {
        if (elements[i].length() < MAX_LEN) {
            file << elements[i] <<  endl;
        }
    }
 
    file.close();

    return 0;
}