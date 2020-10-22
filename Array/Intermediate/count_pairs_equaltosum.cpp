#include<iostream>

using namespace std;

    
int main() {
    int arr[10],count = 0,k;

    cout<<"Enter the elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the Value of sum : ";
    cin>>k;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if(arr[i]+arr[j] == k){
                count++;
            }
        }
        
    }
    
    cout<<"The Count is : "<<count;

    return 0;
}