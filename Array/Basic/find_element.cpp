#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,element,counter = 0;
    vector<int> vec;

    cout<<"\nEnter the size : ";
    cin>>n;


    cout<<"\nEnter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        vec.push_back(element);
    }

    cout<<"\nEnter the element to be found : ";
    cin >> element;

    for(auto it : vec){

        counter+= 1;

        if(it == element){
            
            cout<<"Element is at position : "<<counter;
            break;
        }

    }
     


    
    
}
