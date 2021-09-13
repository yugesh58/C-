#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a,a+m);
        cout<<a[0]+a[1]<<endl;
    }
}