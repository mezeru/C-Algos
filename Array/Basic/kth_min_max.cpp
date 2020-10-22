#include<iostream>

using namespace std;

void Insertionsort(int a[]){

    int temp = 0,j;

    for (int i = 0; i < 10; i++)
    {
        j = i-1;
        temp = a[i];
        while (j>=0 && temp < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
           a[j+1] = temp;     
    }
    
    

    
}

int main() {
    int arr[10],k;

    cout<<"Enter the elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the value of k : ";
    cin>>k;

    Insertionsort(arr);

    cout<<"The smallest Kth is : "<<arr[k-1];
    cout<<"The largest Kth is : "<<arr[10-k];

    return 0;
}