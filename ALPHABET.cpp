#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string s1,s2;
    cin>>s1;
int t;
cin>>t;
while(t--){
    
	   cin>>s2;
	   int count=0;
	   for(int i=0;i<s2.length();i++){
	       for(int j=0;j<s1.length();j++){
	           if(s2[i]==s1[j]){
	               count++;
	           } 
	        
	       } 
	   }
	   if(count==s2.length()){
	       cout<<"Yes"<<endl;
	   }
	   else{
	       cout<<"No"<<endl;
	   } 
	
}

return 0;
}