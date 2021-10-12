#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int one_count=0,zero_count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') one_count++;
        else zero_count++;
    }
    if(one_count==1||zero_count==1){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}

return 0;
}