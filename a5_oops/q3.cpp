#include<iostream>
using namespace std;

class base{
    public:
    int a=35;
    protected:
    int b=99;
    private:
    int c=251;
};

class publicderived:public base{
    public:
    void display(){
        cout<<"Value of a: "<<a<<endl; 
        cout<<"Value of b: "<<b<<endl; 
    }
};

class protectedderived:protected base{
   protected:
   void display(){
        cout<<"Value of a: "<<a<<endl; 
        cout<<"Value of b: "<<b<<endl; 
    }
   };

class pvtderived:private base{
    public:
    void display(){
        cout<<"value of a is "<<a<<endl; 
        cout<<"value of b is"<<b<<endl; 
    }};
    
int main(){
    publicderived pd;
    pd.display();

    protectedderived prd;
    pvtderived pvd;
   
    return 0;
}