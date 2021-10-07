#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    long int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]<a[0]){
            a[0]=a[i];
        }
    }
    cout<<a[0]*(n-1)<<endl;
}

return 0;
}