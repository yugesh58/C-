#include <iostream>
using namespace std;

int main(){
    int t,flag=-1;
    cin>>t;
    while(t--)
    {
    int num;
    cin>>num;
    if(num>=10){
        cout<<flag<<endl;
    }
    else{
        cout<<"Thanks for helping Chef!"<<endl;
    }
    }
	return 0;
}