#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int evnum=0,onum=0;
	while(t--){
	  int num;
	  cin>>num;
	  if(num%2==0){
	      evnum++;
	  }
	  else{
	      onum++;
	  }
	    	}
	if(evnum>onum){
	    cout<<"READY FOR BATTLE";
	}
	else{
	    cout<<"NOT READY";
	}
	
	return 0;
}
