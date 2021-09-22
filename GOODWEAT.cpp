#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[20],sday=0;
	    for(int i=0; i<7;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<7;i++){
	        if(a[i]==1){
	            sday++;
	        }
	    }
	    if(sday>=4){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
