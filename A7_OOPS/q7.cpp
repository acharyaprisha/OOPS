#include <iostream>
using namespace std;

class matrix {
    public:
    int a[100][100], r, c;
    
    void input() {
        cout << "Enter number of rows and columns: ";
        cin >> r >> c;

        cout << "Enter elements:"<<endl;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
    }

    void display() {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend matrix operator*(matrix m1, matrix m2);
};

matrix operator*(matrix m1, matrix m2) {
    matrix temp;

        if(m1.c != m2.r) {
        cout << " Multiplication not possible"<<endl;
        temp.r = temp.c = 0;
        return temp;
    }

    temp.r = m1.r;
    temp.c = m2.c;

    for(int i = 0; i < temp.r; i++) {
        for(int j = 0; j < temp.c; j++) {
            temp.a[i][j] = 0;

            for(int k = 0; k < m1.c; k++) {
                temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }

    return temp;
}

int main() {
    matrix m1, m2, m3;

    cout << "Enter first matrix:"<<endl;
    m1.input();

    cout << "\nEnter second matrix:"<<endl;
    m2.input();

    m3 = m1 * m2;

    if(m3.r != 0) {
        cout << "Resultant Matrix:"<<endl;
        m3.display();
    }

    return 0;
}