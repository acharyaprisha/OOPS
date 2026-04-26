#include<iostream>
#include<string>
using namespace std;

class book{
    public:
    string title;
    string author;
    int isbn;
};

class library{
    public:
    book books[100];
     static int count;

    bool addNewBook(string &title, string &author, int &isbn);
    bool removeBooks(int &isbn);
    bool displayDetails();
};

    int library::count=0;

    bool library::addNewBook(string &title, string &author, int &isbn){
        if(count < 100){
            books[count].title = title;
            books[count].author = author;
            books[count].isbn = isbn;
            count++;
            return true;
        }
        return false;
    }

    bool library::removeBooks(int &isbn){
        for(int i=0; i<=100; i++){
            if(books[i].isbn==isbn){
                for(int j=i; j<count-1; j++){
                    books[j]=books[j+1];
                }
                count--;
                return true;
            }
        }
        return false;
    }

    bool library::displayDetails(){
        if(count==0){
            cout<<"no books are present in library"<<endl;
            return false;
        }
        for(int i=0; i<count; i++){
            cout<<"title:"<<books[i+1].title<<endl;
            cout<<"author:"<<books[i+1].author<<endl;
            cout<<"isbn:"<<books[i+1].isbn<<endl;
        }
        return true;
    }

int main(){
    library lib;
    string t1="seven husbands of evelyn hugo", a1="Taylor Jenkins Reid";int i1=101;
    string t2="the paris apartment", a2="lucy foley";int i2=102;
    string t3="guest list", a3="lucy foley"; int i3=103;
    string t4="metamorphosis", a4="kafka"; int i4=104;
    string t5="Pride and Prejudice", a5="Jane Austen"; int i5=105;

    lib.addNewBook(t1,a1,i1);
    lib.addNewBook(t2,a2,i2);
    lib.addNewBook(t3,a3,i3);
    lib.addNewBook(t4,a4,i4);
    lib.addNewBook(t5,a5,i5);

    cout << " Library Books";
    lib.displayDetails();

    int removeID = 103;
    if (lib.removeBooks(removeID))
        cout << "Book Removed Successfully"<<endl;
    else
        cout << "Book Not Found"<<endl;

    cout <<"Updated Library"<<endl;
    lib.displayDetails();

    return 0;
}
