#include<iostream>
using namespace std;

template<class Ttype>
class Stackk{
    Ttype arr[100];
    int top;

    public:
    Stackk(){
        top=-1;
    }

    void push(Ttype val){
        if(top==99){
            cout << "overflow" << endl;
            return;
        }
        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"underflow"<<endl;
            return;
        }
        else{
            top--;
        }
    }
};

int main(){
    Stackk<int> s1;
    s1.push(11);
    s1.push(82);
    s1.push(9);
    s1.pop();

    Stackk<float> s2;
    s2.push(23.45);
    s2.push(19.7);
    s2.push(0.65);
    s2.pop();

    Stackk<char> s3;
    s3.push('a');
    s3.push('B');
    s3.push('c');
    s3.pop();

    return 0;
}