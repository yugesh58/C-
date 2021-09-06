#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int num,res;
	    cin>>num;
	    res=floor(sqrt(num));
	    cout<<res<<endl;
	}
	return 0;
}
