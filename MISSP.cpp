#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
	    int n , ele;
	    cin>>n;
	    int a[100001]={0};
	    for(int i=0;i<n;i++)
	    {
	        cin>>ele;
	        a[ele]++;
	    }
	    
	    for(int i=0;i<100001;i++)
	    {
	        if(a[i]%2==1)
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	}

return 0;
}