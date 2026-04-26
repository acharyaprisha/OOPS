#include<iostream>
using namespace std;

template <typename T>
void largest(T arr[], int n){
    T max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout << "largest element in array: " << max << endl;
}

int main(){
    int arr1[]={99, 23, 79, 1, 0};
    largest(arr1, 5);

    float arr2[]={23.5, 42.15, 4.89, 19.2};
    largest(arr2, 4);

    char arr3[]={'J', 'H', 'm', 'b'};
    largest(arr3, 4);

    return 0;
}