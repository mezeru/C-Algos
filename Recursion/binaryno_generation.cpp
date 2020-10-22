#include<iostream>

using namespace std;

void print(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}


void binary_No(int arr[],int bits,int p){
    
    if(p == bits){
        print(arr,bits);
        return;
    }
    arr[p] = 0;
    binary_No(arr,bits,p+1);
    arr[p] = 1;
    binary_No(arr,bits,p+1);


}



int main() {

    int arr[10];
    int bits,maxBits;

    cout<<"Enetr the no of bits ";
    cin>>bits;

    binary_No(arr,bits,0);

    return 0;
}