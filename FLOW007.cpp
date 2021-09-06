#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int rem,rnum=0;
        while(num!=0){
            rem=num%10;
            rnum=(rnum*10)+rem;
            num/=10;
        }
        cout<<rnum<<endl;
    }
}