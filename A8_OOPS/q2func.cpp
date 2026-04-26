#include<iostream>
using namespace std;

template <typename T>
void smallest(T arr[], int n){
    T min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min)
        min=arr[i];
    }
    cout << "smallest element in array: " << min << endl;
}

int main(){
    int arr1[]={99, 23, 79, 1, 6};
    smallest(arr1, 4);

    float arr2[]={23.5, 42.15, 4.89, 19.2};
    smallest(arr2, 4);

    char arr3[]={'J', 'H', 'm', 'b'};
    smallest(arr3, 4);

    return 0;
}