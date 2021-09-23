#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,m,k,sum;
    cin>>n>>m>>k;
    if(n>m){
        sum=n-m-k;
    }
    else{
        sum=m-n-k;
    }
    if(sum>0){
        cout<<sum<<endl;
    }
    else{
        cout<<0<<endl;
    }
}

return 0;
}