#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,ans;
	    cin>>a>>b>>c>>d;
	    ans=a+b+c;
	    if(ans<=d){
	     cout<<1<<endl;
	    }
	    else if(a+b<=d){
	        cout<<2<<endl;
	    }
	    else{
	        cout<<3<<endl;
	    }
	}
	return 0;
}
