#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n,count=0;
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    if(count<=3){
        cout<<count<<endl;
    }
    else{
        cout<<"More than 3 digits"<<endl;
    }


return 0;
}