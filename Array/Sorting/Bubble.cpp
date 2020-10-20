#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void Bubblesort(int a[]){

    int temp = 0; 

for (int i = 0; i < 10; i++)
{
    for (int j = i; j < 10; j++)
    {
        if (a[i] > a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    
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
        arr[i] = rand()%50;
    }

    cout<<"\nThe Array formed is : \n";
    printarr(arr);
    cout<<"\n\n";

    Bubblesort(arr);

    cout<<"\nThe Sorted Array is : \n";
    printarr(arr);
    

    return 0;
}
