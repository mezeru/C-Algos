#include<iostream>

using namespace std;

int main(){

    int a[10];

    cout<<"\nEnter the elements : ";
    
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<" "<<a[i];
    }
    
    
}