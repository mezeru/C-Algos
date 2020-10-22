#include <iostream>

using namespace std;

int path(int n,int m){
    if (n==1 || m==1)
    {
        return 1;
    }
    
    return (path(n,m-1))+(path(m,n-1));

}

int main() {int m,n;
    cout<<"Enter the values of N and M";
    cin>>n>>m;

    int a = path(n,m);
    cout<<"The no of paths possible are : "<<a;
    return 0;
}
