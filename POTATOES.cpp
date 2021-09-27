#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int num)
{
    if(num==1)
    return false;
    else if(num==2)
    return true;
    else
    {
        int i;
        for(i=2;i<num;i++)
        {
            if(num%i==0) return false;
        }
        if(i==num) return true;
    }
}

int main() {
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b;
    int x=a+b;
    for(c=1;;c++){
    if(isPrime(x+c))
    break;
         }
         cout<<c<<endl;
}

return 0;
}