#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,element,max,min;
    vector<int> vec;

    cout<<"\nEnter the size : ";
    cin>>n;


    cout<<"\nEnter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        vec.push_back(element);
    }

    max = vec.front();
    min = vec.front();

    for(auto it : vec){

        if( it > max ){
            max = it;
        }
        else if (it < min )
        {
            min = it;
        }

    }

cout<<"The Max value is : "<<max<<"\nThe Min value is : "<<min;
    
}
