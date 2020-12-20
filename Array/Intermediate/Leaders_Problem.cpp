#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n){
    
    int max = -1;
    vector<int> v;
    
    for(int i=n-1; i >= 0 ; i--){
        
            if(max <= arr[i]){
                max = arr[i];
                v.push_back(arr[i]);
            }
        
    
    }
    

    reverse(v.begin(),v.end());
    return v;
}

int main(){
    int arr[] = {16,17,4,3,10,5,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    vector<int> v = leaders(arr,len);
    cout<<"\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
    

    return 0;
}