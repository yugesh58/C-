#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  int num,revnum=0,temp;
	  cin>>num;
	  temp=num;
	  while(temp>0){
	      revnum=revnum*10+(temp%10);
	      temp=temp/10;
	  }
	  
	  if(num==revnum){
	      cout<<"wins"<<endl;
	  }
	  else{
	      cout<<"loses"<<endl;
	  }
	    	}
	return 0;
}
