#include<iostream>

using namespace std;

    
int main() {
    int arr[10],k,count = 0;

    cout<<"Enter the elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the value of Element to display occurances : ";
    cin>>k;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == k)
        {
            count = count + 1;
        }
        
    }
    

    cout<<"The occurance of "<<k<<" is  : "<<count;

    return 0;
}