#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file, even, odd;
   
    file.open("NUM.TXT");
    even.open("EVEN.TXT");
    odd.open("ODD.TXT");

    if (!file || !even || !odd) {
        cout << "file cannot be opened" << endl;
        return 1;
    }

    for (int i = 1; i <= 200; i++) {
        file << i << endl;   
        if (i % 2 == 0)
            even << i << endl;   
        else
            odd << i << endl;    
    }   
    
    file.close(); 
    even.close();
    odd.close();              
    cout << "Numbers written in NUM.TXT" << endl;
    cout << "Even numbers written in EVEN.TXT" << endl;
    cout << "Odd numbers written in ODD.TXT" << endl;
    return 0;
}