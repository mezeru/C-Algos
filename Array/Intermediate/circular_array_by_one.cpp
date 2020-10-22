#include <iostream>

using namespace std;

int main() {
	int a[1000],temp,T,n;
    cout<<"T";
	cin>>T;
	while (T > 0){
	    cout<<"N";
	    cin>>n;
	    
	    for(int i=0;i<n;i++){
	        
	   cin>>a[i];
	   
	    }
	    
	    temp = a[n-1];
	    
	    for(int i=n-1;i>0;i--){
	        
	   a[i] = a[i-1];
	   
	    }
	    a[0] = temp;
	    
	    for(int i=0;i<n;i++){
	        cout<<a[i];
	    }
	    
	    T--;
	    
	}
	    

	
	return 0;
}