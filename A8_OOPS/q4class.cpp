#include<iostream>
using namespace std;

template <class Ttype>
class arithematic{
    public:
    Ttype a;
    Ttype b;

    void arith_op(int choose){
        switch(choose){
            case 1:
            cout<<"Add: "<<a+b<<endl;
            break;

            case 2:
            cout<<"Subtract: "<<a-b<<endl;
            break;

            case 3:
            cout<<"Multiply: "<<a*b<<endl;
            break;

            case 4:
            if(b!=0){
                cout<<"Divide: "<<a/b<<endl;
            }
            else{
                cout<<"Division by zero is not allowed."<<endl;
            }
            break;

            default:
            cout<<"Invalid "<<endl;
        }
    }

};

int main(){
    int v,u,choice;
    float x,y;
    double p,q;

    arithematic<int> obj1;
    cout<<"Enter two integers: ";   
    cin>>v>>u;
    obj1.a=v;
    obj1.b=u;

    cout<<"choose an operation: ";
    cin>>choice;
    obj1.arith_op(choice);

    arithematic<float> obj2;
    cout<<"Enter two floats: ";
    cin>>x>>y;
    obj2.a=x;
    obj2.b=y;
    obj2.arith_op(choice);

    arithematic<double> obj3;
    cout<<"Enter two doubles: ";
    cin>>p>>q;
    obj3.a=p;
    obj3.b=q;
    obj3.arith_op(choice);
}   