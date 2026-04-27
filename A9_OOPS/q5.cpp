#include <iostream>
#include <fstream>
#include <cstring>  
using namespace std;

int main() {
    char str[100];

    cout << "enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);
    cout << "length of string is" << len << endl;

    ofstream file("data.txt");
    file << str;
    file.close();

    ifstream filein("data.txt");
    char ch;

    cout << "characters from file are ";
    while (filein.get(ch))
    cout << ch;
    
    filein.close();
    return 0;
}