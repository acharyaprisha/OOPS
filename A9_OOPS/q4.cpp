#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("ODD.txt"); 
    ofstream output("dest.txt"); 
    char ch;

    if (!input || !output) {
        cout << "file cannot be opened" << endl;
        return 1;
    }

    while (input.get(ch)) {
          output.put(ch);
    }

    input.close();
    output.close();

    cout << "file copied" << endl;

    return 0;
}