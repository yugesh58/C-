#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int num;
	    double fact=1;
	    cin>>num;
	    if(num==0&&num==1)
	    {
	        cout<<1;
	    }
	    
	   else{ 
	   while(num>0)
	   {
	       fact=fact*num;
	       num=num-1;
	   }    
	   }
	   cout<<fact<<endl;
	    	}
	return 0;
}
