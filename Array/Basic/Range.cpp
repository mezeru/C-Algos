#include<iostream>

using namespace std;

    
int main() {
    int arr[10],min,max;

    cout<<"Enter the elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    min = arr[0];
    max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min){
            min = arr[i];
        }
        if (arr[i] > max){
            max = arr[i];
        }

    }
    

    cout<<"The Range of the array is : "<<max-min;

    return 0;
}