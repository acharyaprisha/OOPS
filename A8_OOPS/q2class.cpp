#include<iostream>
using namespace std;

template <class Ttype>
class queuee{
    Ttype arr[100];
    int front, rear;

    public:
    queuee(){
        front=-1;
        rear=-1;
    }

    void enqueue(Ttype val){
        if(rear==99){
            cout << "overflow" << endl;
            return;
        }
        rear++;
        arr[rear]=val;
    }

    void dequeue(){
        if(front==rear){
            cout << "underflow" << endl;
            return;
        }
        front++;
        arr[front]=0;
    }

};

int main(){
    queuee<int> q1;
    q1.enqueue(11);
    q1.enqueue(82);
    q1.enqueue(9);
    q1.dequeue();

    queuee<float> q2;
    q2.enqueue(23.45);
    q2.enqueue(19.7);
    q2.enqueue(0.65);
    q2.dequeue();

    queuee<char> q3;
    q3.enqueue('a');
    q3.enqueue('B');
    q3.enqueue('c');
    q3.dequeue();

    return 0;
}