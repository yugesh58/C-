#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int a,b,ar,pr;
    cin>>a>>b;
    ar=a*b;
    pr=2*(a+b);
    if(ar>pr){
        cout<<"Area"<<endl<<ar;
    }
    else if(pr>ar){
        cout<<"Peri"<<endl<<pr;
    }
    else{
        cout<<"Eq"<<endl<<ar;
    }


return 0;
}