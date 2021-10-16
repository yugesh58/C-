#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a[10]={6,2,5,5,4,5,6,3,7,6};
    long c,d;
    cin>>c>>d;
    long sum=c+d;
    int count=0;
    while(sum!=0){
        long rem=sum%10;
        count+=a[rem];
        sum=sum/10;
    }
    cout<<count<<endl;
}

return 0;
}