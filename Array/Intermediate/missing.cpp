#include<iostream>

using namespace std;

int main(){

    int arr[1000];
    int n;

    int true_sum = 0;
    int curr_sum = 0;

    cout<<"\nEnter the value of n : ";
    cin>>n;

    true_sum = (n+1)*(n)/2;

    cout<<"Enter the "<<n-1<<" elements : ";
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
        curr_sum = curr_sum + arr[i];
    }

    cout<<"The missing element is : "<<true_sum-curr_sum;
    
return 0;
}