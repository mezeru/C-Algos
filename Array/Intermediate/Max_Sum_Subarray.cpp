#include<iostream>

using namespace std;

int index = 0; 

int sum(int a[],int n,int k){

    int max_sum = 0;
    int win_sum = 0;
   if (n < k)
   {
       return -1;
   }

   for (int i = 0; i < k; i++)
   {
       max_sum = max_sum + a[i];
   }

   win_sum = max_sum;
   
   for (int i = k; i < n; i++)
   {
       win_sum = win_sum + a[i] - a[i-k];
       if(win_sum > max_sum){
           max_sum = win_sum;
           index = i-k;
       }
   }
   

    return win_sum;

}


int main(){

int a[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
int k = 0;
int len = sizeof(a)/sizeof(a[0]);
cout<<"The value of k : ";
cin>>k;

int ans = sum(a,len,k);

if(ans == -1){
    cout<<"There k cannot be longer than the array";
}
else
{
    cout<<"The Max Sum of the Sub array will be : "<<ans;
    cout<<"\n\nThe array is :";
    for (int i = 0;i < k ;i++)
    {
        cout<<a[i+k+1]<<" ";
    }
    
}


}