#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%10==0){
        cout<<0<<endl;
    }
    else if(n%5==0){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
}
}
return 0;
}