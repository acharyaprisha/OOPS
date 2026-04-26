#include <iostream>
#include <fstream>
using namespace std;

class student {
public:
    int roll;
    char name[50];
};

int main() {
    student s;

    cout << "enter name and roll no.: ";
    cin >> s.name >> s.roll;

    ofstream fout("stu.dat", ios::binary);
    fout.write((char*)&s, sizeof(s));
    fout.close();

    ifstream fin("stu.dat", ios::binary);
    student s2;
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << "data from file: " << s2.name << ", " << s2.roll << endl;

    return 0;
}