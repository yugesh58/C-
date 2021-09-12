#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    double q,p;
	    cin>>q>>p;
	    cout<<fixed<<setprecision(6);
	    if(q>1000){
	        double ans=q*p*0.9;
	        cout<<ans<<endl;
	    }
	    else{
	        cout<<q*p<<endl;
	    }
	}
	return 0;
}
