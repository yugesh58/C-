#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    int a[n],count=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(k>=a[i]){
	            cout<<"1";
	             k-=a[i];
	      }
	       else{
	            cout<<"0";
	       }
	        }
	        cout<<endl;
}

return 0;
}