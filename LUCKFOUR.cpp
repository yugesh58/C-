#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int num;
	    cin>>num;
	    int count=0;
	    while(num>0){
	        int rem=num%10;
	        if(rem==4)count++;
	        num=num/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
