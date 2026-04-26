#include<iostream>
using namespace std;

template <typename T>
void linearsearch(T arr[], int n, T val){
    for(int i=0; i<n; i++){
        if(arr[i]==val){
            cout << "element found at index: " << i << endl;
            return;
        }
    }
    cout << "element not found" << endl;
}

int main(){
    int arr1[]={99, 23, 79, 1, 0};
    linearsearch(arr1, 4, 0);

    float arr2[]={23.5, 42.15, 4.89, 19.2};
    linearsearch(arr2, 4, 4.89f);

    char arr3[]={'J', 'H', 'm', 'b'};
    linearsearch(arr3, 4, 'H');

    return 0;
}