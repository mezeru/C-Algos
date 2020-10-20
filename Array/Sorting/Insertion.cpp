#include<iostream>
#include<stdio.h>
#include<stdlib.h>

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




void printarr(int arr[]){
    for (int i = 0; i < 10; i++)
    {
        cout<<" "<<arr[i];
    }
}


int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand()%20;
    }

    cout<<"\nThe Array formed is : \n";
    printarr(arr);
    cout<<"\n\n";

    Insertionsort(arr);

    cout<<"\nThe Sorted Array is : \n";
    printarr(arr);
    

    return 0;
}
