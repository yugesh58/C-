#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    float bsalary,gsalary,hra,da;
    cin>>bsalary;
    cout<<fixed<<setprecision(2);
    if(bsalary<1500){
        hra=0.1*bsalary;
        da=0.9*bsalary;
        gsalary=bsalary+da+hra;
        cout<<gsalary<<endl;
    }
    else{
        hra=500;
        da=0.98*bsalary;
        gsalary=bsalary+da+hra;
        cout<<gsalary<<endl;
    }
}

return 0;
}