#include<iostream>

using namespace std;


int Trw(int a[],int n){

    int vol = 0;
    int left[n];
    int right[n];

    left[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i-1],a[i]);
    }

    right[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {     
        vol = vol + (min(left[i],right[i]) - a[i]);
    }
    
    
    return vol;

}


int main(){

    int ar[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int len = sizeof(ar)/sizeof(ar[0]);
    
    int fvol = Trw(ar,len);

    cout<<"The volume is "<<fvol;
}