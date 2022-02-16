#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,a[100];
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int k;
    cin>>k;
    int c=a[k-1];

    sort(a,a+n);
    
    for(int i=0;i<n;i++){
        
    if(a[i]==c){
    cout<<i+1<<endl;
    break;
    }
    }
    
}

return 0;
}