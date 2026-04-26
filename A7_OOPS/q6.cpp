#include <iostream>
#include <cstring>
using namespace std;

class STRING {
    char str[500];

public:
        STRING(char s[] = "") {
        strcpy(str, s);
    }

    bool operator==(STRING s) {
        return strcmp(str, s.str) == 0;
    }

    STRING operator+(STRING s) {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    char s1[500], s2[500];

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    STRING str1(s1), str2(s2), str3;

    if(str1 == str2)
        cout << "Strings are equal"<<endl;
    else
        cout << "Strings are not equal"<<endl;
        str3 = str1 + str2;

    cout << "Concatenated string: ";
    str3.display();

    return 0;
}