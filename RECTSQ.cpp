#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
      int n1, n2, hcf;
  cin >> n1 >> n2;
  if ( n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }

int ans=((n1/hcf)*(n2/hcf));
cout<<ans<<endl;
}

return 0;
}