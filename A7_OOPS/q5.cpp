#include<iostream>
using namespace std;

class Time {
public:
    int h,m,s;
    
    Time(int hours=0, int min=0, int sec=0){
        h=hours;
        m=min;
        s=sec;
    }

    Time operator+(const Time &t){
        Time temp;

        temp.s = s + t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;

        if(temp.s >= 60){
            temp.m += temp.s / 60;
            temp.s = temp.s % 60;
        }

        if(temp.m >= 60){
            temp.h += temp.m / 60;
            temp.m = temp.m % 60;
        }

        return temp;
    }

    void display(){
        cout << h << " hours " << m << " minutes " << s << " seconds" << endl;
    }
};

int main(){
    int h1,m1,s1,h2,m2,s2;
   
    cout<<"enter hours, minutes and seconds for first time: ";
    cin>>h1>>m1>>s1;

    cout<<"enter hours, minutes and seconds for second time: ";
    cin>>h2>>m2>>s2;

    Time t1(h1,m1,s1), t2(h2,m2,s2), t3;

    t3 = t1 + t2;

    cout<<"Sum of times: ";
    t3.display();

    return 0;
}



