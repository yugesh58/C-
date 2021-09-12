#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int base;
	  cin>>base;
	  base-=2;
	  base=floor(base/2);
	  int ans=base*(base+1)/2;
	  cout<<ans<<endl;
	    	}
	return 0;
}
