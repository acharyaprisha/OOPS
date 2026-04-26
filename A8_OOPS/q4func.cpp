#include<iostream>
using namespace std;

template <typename T>
void bubble(T arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout << "sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[]={99, 23, 79, 1, 0};
    bubble(arr1, 5);

    float arr2[]={23.5, 42.15, 4.89, 19.2};
    bubble(arr2, 4);

    char arr3[]={'J', 'H', 'm', 'b'};
    bubble(arr3, 4);

    return 0;
}