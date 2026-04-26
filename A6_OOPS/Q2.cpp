#include<iostream>
#include<string>
using namespace std;

class book{
public:
    string title;
    string author;
    int isbn;

    book(){
        title = "";
        author = "";
        isbn = 0;
    }

    book(string title, string author, int isbn) {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }
};

class library{
public:
    book books[100];
    static int count;

    bool addNewBook(const string &title, const string &author, const int &isbn);
    bool removeBooks(const int &isbn);
    void displayDetails();
};

int library::count = 0;

bool library::addNewBook(const string &title, const string &author, const int &isbn){
    if(count < 100){
        books[count].title = title;
        books[count].author = author;
        books[count].isbn = isbn;
        count++;
        return true;
    }
    return false;
}

bool library::removeBooks(const int &isbn){
    for(int i = 0; i < count; i++){
        if(books[i].isbn == isbn){
            for(int j = i; j < count - 1; j++){
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

void library::displayDetails(){
    if(count == 0){
        cout << "No books in library\n";
        return;
    }

    for(int i = 0; i < count; i++){
        cout << "\nTitle: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "ISBN: " << books[i].isbn << endl;
    }
}

int main(){
    library lib;

    book b1("seven husbands of evelyn hugo", "Taylor Jenkins Reid", 101);
    book b2("the paris apartment", "lucy foley", 102);
    book b3("guest list", "lucy foley", 103);
    book b4("metamorphosis", "kafka", 104);
    book b5("Pride and Prejudice", "Jane Austen", 105);

    lib.addNewBook(b1.title, b1.author, b1.isbn);
    lib.addNewBook(b2.title, b2.author, b2.isbn);
    lib.addNewBook(b3.title, b3.author, b3.isbn);
    lib.addNewBook(b4.title, b4.author, b4.isbn);
    lib.addNewBook(b5.title, b5.author, b5.isbn);

    cout << "\nLibrary Books:\n";
    lib.displayDetails();

    int removeID = 103;
    if (lib.removeBooks(removeID))
        cout << "\nBook Removed Successfully\n";
    else
        cout << "\nBook Not Found\n";

    cout << "\nUpdated Library:\n";
    lib.displayDetails();

    return 0;
}