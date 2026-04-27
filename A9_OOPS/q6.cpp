#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
{
    ofstream f;
    f.open("alpha.txt");

    for(char c='A'; c<='Z'; c++)
        f<<c;

    f.close();

    ifstream r;
    r.open("alpha.txt");

    r.seekg(9);
    char ch;
    r.get(ch);
    cout<<"10th character is "<<ch<<endl;
    r.close();


    fstream f2;
    f2.open("alpha.txt", ios::in | ios::out);

    f2.seekp(4);
    f2.put('X');
    f2.close();

    ifstream r2("alpha.txt");
    string s;
    r2>>s;
    cout<<"after change "<<s<<endl;
    r2.close();


    ifstream r3("alpha.txt");
    r3.seekg(0, ios::end);
    cout<<"size = "<<r3.tellg()<<endl;
    r3.close();


    ifstream r4("alpha.txt");
    r4.seekg(-1, ios::end);
    r4.get(ch);
    cout<<"last char = "<<ch<<endl;
    r4.close();


    ofstream f3("data.txt");
    f3<<"Line1"<<endl<<"Line2"<<endl<<"Line3"<<endl<<"Line4";
    f3.close();

    ifstream r5("data.txt");
    r5.seekg(10);

    cout<<"pos = "<<r5.tellg()<<endl;

    while(r5.get(ch))
        cout<<ch;

    cout<<endl;
    r5.close();


    fstream f4("hello.txt", ios::out);
    string str="HelloWorld";

    for(int i=0;i<str.length();i++)
    {
        f4.put(str[i]);
        cout<<f4.tellp()<<" ";
    }
    cout<<endl;
    f4.close();


    fstream f5("hello.txt", ios::in | ios::out);
    f5.seekp(5);
    f5<<"C++  ";
    f5.close();

    ifstream r6("hello.txt");
    string res;
    getline(r6,res);
    cout<<res<<endl;
    r6.close();

    return 0;
}