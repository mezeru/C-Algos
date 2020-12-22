#include<iostream>
#include<vector>

using namespace std;

void rearrange(long long *arr, int n) 
{ 

    vector<int> max;
    vector<int> min;
    int i = 0;
    int x = 0;
    int m = 0;
    
    for(i = n-1; i >= n/2 ; i-- ){
         max.push_back(arr[i]);
    }
    
    i = 0;
    
    while(i <= n/2){
        min.push_back(arr[i]);
        i = i+1;
    }
    
    
    for(i=0; i<n ;i++){
        
        if(i%2 == 0){
            
            arr[i] = max[x];
            x++;
        }
        else{
            
            arr[i] = min[m];
            m++;
            
        }
        
    }
    
	 
}

int main()
{   
    long long arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr,n);

    cout<<"The final Output : \n";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
   
    return 0;
}
