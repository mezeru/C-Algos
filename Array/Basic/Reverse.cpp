#include<iostream>

using namespace std;

int main(){

    int a[10];
    int p1 = 0,p2,c,n;

    cout<<"\nEnter the size of the array : ";
    cin>>n;

    cout<<"\nEnter the elements : ";
    
    for (p2 = 0 ; p2 < n; p2++)
    {
        cin>>a[p2];
    }



    while (p1 <= n/2)
    {p2--;
        c = a[p1];
        a[p1] = a[p2];
        a[p2] = c;
        
    
    p1++;
    }

    for(int i = 0;i < n;i++){
        cout<<"\t"<<a[i];
    }
    
    
}