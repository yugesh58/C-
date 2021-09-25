#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long l,r,ans;
	    cin>>l>>r;
	   
	    while(l%3!=0){
	        l=l+1;
	    }
	    while(r%3!=0){
	        r=r-1;
	    }
	    ans=(r/3)-(l/3);
	    cout<<ans+1<<endl;
	}
	return 0;
}
