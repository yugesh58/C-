#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
int a,b,ans;
cin>>a>>b;
if(a>b){
    ans=a-b;
}
else{
    ans=b-a;
}

int ians=ans;
int last=ians%10;
if(last==1){
    ans=(ans-last)+2;
}
else{
ans=(ans-last)+1;
}
cout<<ans;

}
