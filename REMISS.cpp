#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  int a,b;
	  cin>>a>>b;
	  if(a>b||a==b){
	      cout<<a<<"\t"<<a+b<<endl;
	  }
	  if(a<b||a==b){
	      cout<<b<<"\t"<<a+b<<endl;
	  }
	    	}
	return 0;
}
