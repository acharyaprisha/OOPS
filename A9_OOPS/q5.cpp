#include <iostream>
#include <fstream>
#include <cstring>   // for strlen()
using namespace std;

int main() {
    char str[100];

    cout << "enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);
    cout << "length of string: " << length << endl;

    ofstream file("data.txt");
    file << str;
    file.close();

    ifstream filein("data.txt");
    char ch;

    cout << "characters from file: ";
    while (filein.get(ch))
    cout << ch;
    
    filein.close();
    return 0;
}