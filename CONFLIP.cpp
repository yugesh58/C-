#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
  int g;
  cin>>g;
  while(g--){
      int i,n,q;
      cin>>i>>n>>q;
      int hcount=0,tcount;
      if(i==1){
          hcount=n/2;
          if(q==1) cout<<hcount<<endl;
          else cout<<n-hcount<<endl;
          
      }
      else{
           tcount=n/2;
          if(q==2) cout<<tcount<<endl;
          else cout<<n-tcount<<endl;
      }
      
      
  }
}

return 0;
}