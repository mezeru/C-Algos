#include<iostream>


using namespace std;

int FindCandi(int a[],int n){

int MJ = a[0];
int count = 0;
int index = 0;

for (int i = 0; i < n; i++)
{
    
    if(MJ == a[i]){
        count++;
    }
    else
    {
        --count;

        if(count == 0){
            MJ = a[i];
            count = 1;
        }
        
    }
    

}


return MJ;
}


int main(){

int a[] = {2,3,7,3,4,4,4,4,4,4,4,4};
int len = sizeof(a)/sizeof(a[0]);
int count = 0;
int candi = FindCandi(a,len);

for (int i = 0; i < len; i++)
{
    if(a[i] == candi){
        count++;
    }
}

if(count > len/2){
    cout<<"The Majority Element is : "<<candi;
}
else{
    cout<<"There is no Majority Element";
}


}