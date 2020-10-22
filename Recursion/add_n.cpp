#include <iostream>

using namespace std;

int Sum(int a){
    if(a == 1){
        return 1;
    }

    return (a + Sum(a-1));
}

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    n = Sum(n);
    cout<<"The Sum is : "<<n;

    return 0;
}