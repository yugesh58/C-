#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int n;
cin>>n;
float n1;
cin>>n1;






if((n%5==0) && ((n+0.5)<n1) &&(n!=0))
{ float r=n1-(n+0.5);
    cout<<fixed<<setprecision(2)<<r;
}
else
cout<<fixed<<setprecision(2)<<n1;

return 0;
}