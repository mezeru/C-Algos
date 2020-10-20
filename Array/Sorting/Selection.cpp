#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void Selectsort(int a[]){

    int temp = 0,pos; 

for (int i = 0; i < 10; i++)
{
    pos = i;
    
    for (int j = i; j < 10; j++)
    {
        if(a[j] < a[pos]){
            pos = j;
        }

        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;

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
        arr[i] = rand()%20;
    }

    cout<<"\nThe Array formed is : \n";
    printarr(arr);
    cout<<"\n\n";

    Selectsort(arr);

    cout<<"\nThe Sorted Array is : \n";
    printarr(arr);
    

    return 0;
}
