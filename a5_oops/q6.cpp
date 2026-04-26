#include <iostream>
using namespace std;

class Book {
protected:
    string title, author;
    float price;

public:
    void input() {
        cout << "enter book title: "<<endl;
        cin >> title;

        cout << "enter author name: "<<endl;
        cin >> author;

        cout << "enter price: "<<endl;
        cin >> price;
    }

    void display() {
        cout << "title: " << title << endl;
        cout << "author: " << author << endl;
        cout << "price: " << price << endl;
    }
};

class Textbook : public Book {
    string subject;

public:
    void getTextbookData() {
        input(); 
        cout << "enter subject: "<<endl;
        cin >> subject;
    }

    void displayTextbook() {
        display();   
        cout << "subject: " << subject << endl;
    }
};

int main() {
    Textbook t;
    cout << "enter textbook details:";
    t.getTextbookData();

    cout << "textbook details:";
    t.displayTextbook();
    return 0;
}